#include "myl.h"
#define BUFF_LENGTH 100

// Function to print a null-terminated string and return its length
int printStr(char * s) {
    int char_cnt = 0;
    while (s[char_cnt] != '\0') char_cnt++;
    __asm__ __volatile__(
        "movl $1, %%eax \n \t"
        "movq $1, %%rdi \n \t"
        "syscall \n \t"
        :
        :"S"(s), "d"(char_cnt)
    );
    return char_cnt;
}

// Function to read an int in %d form. If it is not valid, ERR is returned. If overflow happens, it is handled just how C handles it.
int readInt(int *n) {
    char buff[BUFF_LENGTH];          // Variable to store the character read
    int res = 0;        // Variable to store the resultant number
    int start = 1;      // Flag to see if the starting character is being read
    int posi = 1;       // Flag to see if n is positive or not
    int check = 1;      // Flag to see if input is a valid integer or not
    int len = 0;        // To store length of input
    int ind = 0;        // To iterate through input
    // Read from input and store in buff until newline or BUFF_LENGTH is reached.
    __asm__ __volatile__(
        "movl $0, %%eax \n \t"
        "movq $0, %%rdi \n \t"
        "syscall \n \t"
        :"=a"(len)
        :"S"(buff), "d"(BUFF_LENGTH)
    );
    if (len <= 0) return ERR;

    // Loop until newline is read.
    while (buff[ind] != '\n') {
        res *= 10;
        if (start == 1 && buff[ind] == '-') posi = 0;        // Negative case
        else if (buff[ind] < '0' || buff[ind] > '9') check = 0;   // If invalid character
        else res += (int)(buff[ind]-'0');                    // Add the character
        start = 0;
        ind++;
    }
    if (check == 0 || start == 1) return ERR;           // Invalid or no input found before newline

    // Set result and return
    if (posi == 0) res *= -1;
    *n = res;
    return OK;
}

// Function to print an int and return the number of characters printed.
int printInt(int n) {
    char buff[BUFF_LENGTH];          // Array to store digits in reversed form. int can have 10 digits at max.
    int ind = 0;            // Variable to store current index of array
    int numprint = 0;       // Variable to count number of characters printed
    char zero = '0';

    if (n == 0) {
        __asm__ __volatile(
            "movl $1, %%eax \n \t"
            "movq $1, %%rdi \n \t"
            "syscall \n \t"
            :
            :"S"(&zero), "d"(1)
        );
        numprint = 1;
    }
    else {
        // Negative case
        if (n < 0) {
            char minus = '-';
            __asm__ __volatile(
                "movl $1, %%eax \n \t"
                "movq $1, %%rdi \n \t"
                "syscall \n \t"
                :
                :"S"(&minus), "d"(1)
            );
            n *= -1;
            numprint = 1;
        }
        while (n) {
            buff[ind] = zero+(n%10);
            n /= 10;
            ind++;
            numprint++;
        }
    }

    // Print the array in reverse order
    while (ind) {
        ind--;
        __asm__ __volatile__(
            "movl $1, %%eax \n \t"
            "movq $1, %%rdi \n \t"
            "syscall \n \t"
            :
            :"S"(buff+ind), "d"(1)
        );
    }
    return numprint;
}

// Function to read a float in %f form. If it is not valid, ERR is returned. If overflow happens, it is handled just how C handles it.
int readFlt(float * f) {
    char buff[BUFF_LENGTH];          // Array to get input
    float res = 0;      // Variable to store resultant float
    int posi = 1;       // Flag to see if f is positive or not
    int start = 1;      // Flag to see if current character is starting or not
    int check = 1;      // Flag to see if input is a valid float or not
    int point = 0;      // Flag to see if decimal point exists
    int len = 0;
    int ind = 0;

    __asm__ __volatile__(
        "movl $0, %%eax \n \t"
        "movq $0, %%rdi \n \t"
        "syscall \n \t"
        :"=a"(len)
        :"S"(buff), "d"(BUFF_LENGTH)
    );
    if (len < 0) return ERR;

    // Loop until newline encountered. This is for the integer part of the float.
    while (buff[ind] != '\n') {
        if (start == 1 && buff[ind] == '-') posi = 0;        // Negative
        else if (buff[ind] < '0' || buff[ind] > '9') {            // If character entered is not a digit, it can be a . or invalid character
            if (buff[ind] == '.') {
                point = 1;
                start = 0;
                ind++;
                break;
            }
            else check = 0;
        }
        else {
            res *= 10;
            res += (int)(buff[ind]-'0');                     // Add character to resultant
        }
        start = 0;
        ind++;
    }

    if (check == 0 || start == 1) return ERR;           // Invalid or no input
    if (point == 0) {                                   // No floating point given in input, no need to go further
        *f = res;
        if (posi == 0) *f *= -1;
        return OK;
    }

    float dec = 1;                                      // Variable to store position of floating point
    // Loop until newline.
    while (buff[ind] != '\n') {
        dec /= 10;                                      // Shift floating point
        if (buff[ind] < '0' || buff[ind] > '9') check = 0;        // Invalid input
        else res += dec*((int)(buff[ind]-'0'));              // Add character in floating point position.
        ind++;
    }
    if (check == 0) return ERR;                         // Invalid input

    // Set result and return
    if (posi == 0) res *= -1;
    *f = res;
    return OK;
}

// Function to print a float and return number of characters printed.
int printFlt(float f) {
    char buff[BUFF_LENGTH];      // Array to store digits of float's integer part in reversed form
    int ind = 0;        // Variable to keep current index of array
    int numprint = 0;   // Varible to count number of characters printed
    char zero = '0';
    char point = '.';

    if (f == 0) {
        char zerocase[] = "0.000000";
        __asm__ __volatile__(
            "movl $1, %%eax \n \t"
            "movq $1, %%rdi \n \t"
            "syscall \n \t"
            :
            :"S"(&zerocase), "d"(8)
        );
        numprint = 3;
    }
    else {
        // Negative
        if (f < 0) {
            char minus = '-';
            __asm__ __volatile__(
                "movl $1, %%eax \n \t"
                "movq $1, %%rdi \n \t"
                "syscall \n \t"
                :
                :"S"(&minus), "d"(1)
            );
            f *= -1;
            numprint = 1;
        }
        
        // Print integer part (float can hold bigger values than int range)
        long long n = f;
        f -= n;
        while (n >= 1) {
            buff[ind] = zero+(n%10);
            n /= 10;
            ind++;
            numprint++;
        }
        while (ind) {
            ind--;
            __asm__ __volatile__(
                "movl $1, %%eax \n \t"
                "movq $1, %%rdi \n \t"
                "syscall \n \t"
                :
                :"S"(buff+ind), "d"(1)
            );
        }

        // Print '.'
        __asm__ __volatile__(
            "movl $1, %%eax \n \t"
            "movq $1, %%rdi \n \t"
            "syscall \n \t"
            :
            :"S"(&point), "d"(1)
        );
        numprint++;

        // Print float part. If doesn't exist print 0.
        int precision = 6;
        while (precision > 0) {
            f *= 10;
            precision--;
            char c = zero+((long long)f % 10);
            __asm__ __volatile__(
                "movl $1, %%eax \n \t"
                "movq $1, %%rdi \n \t"
                "syscall \n \t"
                :
                :"S"(&c), "d"(1)
            );
            numprint++;
        }
    }
    return numprint;
}