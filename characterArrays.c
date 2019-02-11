#include <stdio.h>
void Increment(int *p) {
    *p += 1;
    printf("Address of variable a in increment = %p\n", p);
    printf("a = %d\n", *p);
}

int main(void) {
    int a;
    a = 10;
    Increment(&a);
    printf("Address of variable a in increment = %p\n", &a);
    printf("a = %d\n", a);
}