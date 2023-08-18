#include "myl.h"

// Program to test correctness.
int main() {
    printStr("Enter number of tests to do on INT: ");
    int t;
    while(readInt(&t) == ERR) {
        printStr("Error: Did not enter valid integer. Please enter a valid integer: ");
    }
    while ((t--) > 0) {
        int n;
        printStr("Enter signed integer: ");
        if (readInt(&n) == OK) {
            printStr("Number read: ");
            int cnt = printInt(n);
            printStr("\nNumber of characters printed: ");
            printInt(cnt);
            printStr("\n");
        }
        else {
            printStr("Not a valid integer.\n");
        }
    }

    printStr("Enter number of tests to do on FLOAT: ");
    while(readInt(&t) == ERR) {
        printStr("Error: Did not enter valid integer. Please enter a valid integer: ");
    }
    while((t--) > 0) {
        float f;
        printStr("Enter signed floating point number: ");
        if (readFlt(&f) == OK) {
            printStr("Number read: ");
            int cnt = printFlt(f);
            printStr("\nNumber of characters printed: ");
            printInt(cnt);
            printStr("\n");
        }
        else {
            printStr("Not a valid float.\n");
        }
    }
}