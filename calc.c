/*
Name: Ben Farber
Date: 01.21.19
Lab: 3
Program Description: A calculator that adds, subtracts, 
    multiplies, divides, calculates the modulus, and 
    tests if a number is prime
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get2Numbers();
void add2Ints(int, int);
void sub2Ints(int, int);
void mul2Ints(int, int);
void div2Floats(float, float);
void mod2Ints(int, int);
void isPrime(int);
void pause(int);

int main() {
    int operationChoice = 0;
    int num1 = 0;
    int num2 = 0;
    int ans = 0;
    do {
        printf("\nCalculator Menu:\n");
        printf("[1] Addition\n");
        printf("[2] Subtraction\n");
        printf("[3] Multiplication\n");
        printf("[4] Division\n");
        printf("[5] Modulus (integers only)\n");
        printf("[6] Test if prime (Integers only\n");
        printf("[7] Exit\n");
        printf("\nPlease choose an operation: ");
        scanf("%d", &operationChoice);
        printf("\n");
        switch(operationChoice) {
            case 1:
                printf("~ADDITION~\n\n");
                if (get2Numbers() == 0) {
                    add2Ints(num1, num2);
                } else {
                    add2Floats()
                }
                break;
            case 2:
                printf("~SUBTRACTION~\n\n");
                
                break;
            case 3:
                printf("~MULTIPLICATION~\n\n");
                
                break;
            case 4:
                printf("~DIVISION~\n\n");
                
                break;
            case 5:
                printf("~MODULUS~\n\n");
                
                break;
            case 6:
                printf("~PRIME~\n\n");
                
                break;
            case 7:
                printf("Exiting Calculator...\n\n");
                break;
            default:
                printf("Invalid Response.\n");
                break;
        }
        pause(2);
    } while (operationChoice != 7);
}
int get2Numbers() {
    printf("Enter a number: ");
    scanf("%f", num1);
    int num1int = num1;
    printf("Enter a second number: ");
    scanf("%f", num2);
    int num2int = num2;
    // if one of the numbers is float return 1
    if ((num1 - num1int != 0 || num2 - num2int != 0) {
        return 1;
    } else {
        return 0;
    }
}

void add2Ints(int add1, int add2) {
    printf("%d + %d = %d\n", add1, add2, add1 + add2);
}

void sub2Ints(int sub1, int sub2) {
    printf("%d - %d = %d\n", sub1, sub2, sub1 - sub2);
}

void mul2Ints(int mul1, int mul2) {
    printf("%d x %d = %d\n", mul1, mul2, mul1 * mul2);
}

void div2Floats(float div1, float div2) {
    printf("%0.2f / %0.2f = %0.2f\n", div1, div2, div1 / div2);
}

void mod2Ints(int mod1, int mod2) {

}

void isPrime(int primeTestNumber) {

}

void pause(int pauseTime) {
    int currentTime = 0;
    int elapsedTime = 0;
    currentTime = time(NULL);
    do {
        elapsedTime = time(NULL);
    } while ((elapsedTime - currentTime) < pauseTime);
}