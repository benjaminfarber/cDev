/*
Chapter 6 Practice
Ben Farber
*/

#include <stdio.h>

void space();

int main() {
    int array1[5] = {0, 1, 2, 3, 4};
    int array2[5];
    for (int i = 0; i < 5; i++) {
        array2[i] = i;
    }
    int array3[5] = {0};
    printf("%d", array1[1]);
    space();
    printf("%d", array2[0]);
    space();
    for (int i = 0; i < 5; i++) {
        printf("\nThe value of array1 at index %d is %d", i, array1[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("\nThe value of array2 at index %d is %d", i, array2[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("\nThe value of array3 at index %d is %d", i, array3[i]);
    }
    space();
    return 0;
}

void space() {
    printf("\n\n");
}