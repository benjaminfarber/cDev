/*
Chapter 6 Practice
Ben Farber
*/

#include <stdio.h>

int main() {
    int x;
    int index = -1;
    int array[5];
    for (x = 0; x < 5; x++) {
        array[x] = (x + 5);
    }
    do {
        printf("\nEnter a valid index (0-4): ");
        scanf("%d", &index);
    } while (index < 0 || index > 4);

    printf("\nThe value of index %d is %d\n", index, array[index]);
    return 0;
}