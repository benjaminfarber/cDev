#include <stdio.h>

void printArgument(const int *);
void printArray(const int []);
void modifyArray(const int []);

int main(void) {
    int number = 5;
    printArgument(&number);

    int numbers[3] = {2, 4, 6};
    printArray(numbers);
    modifyArray(numbers);

    return 0;
}

void printArgument(const int *num) {
    printf("\nRead Only Argument is: %d ", *num);
}

void printArray(const int num[]) {
    int x;
    printf("\nArray contents are: ");
    for (x = 0; x < 3; x++) {
        printf("%d ", num[x]);
    }
}

void modifyArray(const int num[]) {
    int x;
    for (x = 0; x < 3; x++) {
        num[x] = num[x] * num[x];
    }
}