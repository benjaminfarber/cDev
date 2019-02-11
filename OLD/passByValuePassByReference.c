#include <stdio.h>

void demoPassByValue(int);
void demoPassByReference(int *);

int main(void) {
    int x = 0;
    int y = 0, *pY = NULL;
    pY = &y;

    printf("\nPass by value -- x: ");
    scanf("%d", &x);
    demoPassByValue(x);
    printf("\nThe original value of x did not change: %d\n", x);
    
    printf("\nPass by reference -- y: ");
    scanf("%d", pY);
    demoPassByReference(pY);
    printf("\nThe value of y is now: %d\n", *pY);

    return 0;
}

void demoPassByValue(int x) {
    x += 5;
    printf("\nThe value of x is: %d\n", x);
}

void demoPassByReference(int *ptrY) {
    *ptrY += 5;
    printf("\nThe value of y is now: %d\n", *ptrY);
}