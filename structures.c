#include <stdio.h>

int main(void) {
    int x;
    float f;
    double d;
    char c;
    typedef struct employee {
        int id;
        char *name;
        float salary;
    } e;
    printf("\nSize of integer: %d bytes\n", sizeof(x));
    printf("\nSize of float: %d bytes\n", sizeof(f));
    printf("\nSize of double: %d bytes\n", sizeof(d));
    printf("\nSize of char: %d bytes\n", sizeof(c));
    printf("\nSize of employee structure: %d bytes\n", sizeof(e));
    return 0;
}