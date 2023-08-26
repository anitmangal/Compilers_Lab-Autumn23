#define TEST 5678

typedef union yetanotherunion yau;
static yau yau_var;

struct yetanotherstruct_ {
    _Bool flag;
    _Complex z;
    _Imaginary img;
    char charval;
};

extern inline float baz(float *restrict arr, char ch) {
    register double d;
    static float f = 3.14;
    auto long l;
    volatile unsigned u;
    return f + ch;
}

enum yetanotherenum {
    LABEL1, LABEL2, LABEL3
};

union yetanotherunion {
    float p, q;
};

char txt1[] = "Yet Another string // won't comment out :D /* nor here */";
char ch = '\b';
signed char byte = -100;
unsigned short us = 65000;

int main() {
    m1++;

    unsigned m = 6 * sizeof(unsigned);
    for(int counter = m; counter > 0; counter--) {
        m = m + m - (+m) / 2;
        m <<= 3;
        m = m & m & m;
        m /= 6;
        m *= 6;
        m >>= 3;
        m += 3, m -= 3;
        m ^= ~m;
        if(m % 4 == 1)
            printf("m = %u\n", m);
        else {
            continue;
        }
    }

    float f9 = 456.789;
    float f11 = .891E-4;
    double d7 = 456.7e4;
    const float f10 = .891;
    const double d8 = .123;
    float f12 = 0.891e+4;
    float f13 = 45.891e02;

    yetanotherstruct_ yas1; 
    switch (yas1.flag) {
        case 0:
            yau_var.p -= m1;
            break;
        case 1:
            yau_var.q += m1;
            yau_var.q *= yau_var.p;
            break;
        default:
            break;
    }

    char txt2[] = "Concat" /* Test this too! */ "enate!";
    char txt3[] = "" /* Empty string check */;
    int m1 = m ^ us ? 5 : 6;

    do {
        byte <<= 4;
        us = us & byte;
        byte >>= 4;
        us = ~us;
        if(us <= 50000 && us > 100)
            goto label_next;
        label_next:
            continue;
    } while(m1 != 10 || !m);

    return 0;
}
