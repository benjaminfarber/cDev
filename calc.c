/*
Name: Ben Farber
Date: 01.22.19
Lab: 3
Program Description: A calculator that adds, subtracts, 
    multiplies, divides, calculates the modulus, and 
    tests if a number is prime
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function Declarations
int get2Numbers(void);
void pause(int);

// Global Variables
int int1 = 0;
int int2 = 0;
int intAnswer = 0;
float float1 = 0.0;
float float2 = 0.0;
float floatAnswer = 0.0;

int main() {
    int operationChoice = 0;
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
                if (get2Numbers() == 1) {
                    intAnswer = int1 + int2;
                    printf("%d + %d = %d\n", int1, int2, intAnswer);
                } else {
                    floatAnswer = float1 + float2;
                    printf("%0.1f + %0.1f = %0.1f\n", float1, float2, floatAnswer);
                }
                break;
            case 2:
                printf("~SUBTRACTION~\n\n");
                if (get2Numbers() == 1) {
                    intAnswer = int1 - int2;
                    printf("%d - %d = %d\n", int1, int2, intAnswer);
                } else {
                    floatAnswer = float1 - float2;
                    printf("%0.1f - %0.1f = %0.1f\n", float1, float2, floatAnswer);
                }                
                break;
            case 3:
                printf("~MULTIPLICATION~\n\n");
                if (get2Numbers() == 1) {
                    intAnswer = int1 * int2;
                    printf("%d x %d = %d\n", int1, int2, intAnswer);
                } else {
                    floatAnswer = float1 * float2;
                    printf("%0.1f x %0.1f = %0.1f\n", float1, float2, floatAnswer);
                }               
                break;
            case 4:
                printf("~DIVISION~\n\n"); 
                if (get2Numbers() == 1) {
                    intAnswer = int1 / int2;
                    printf("%d / %d = %d\n", int1, int2, intAnswer);
                } else {
                    floatAnswer = float1 / float2;
                    printf("%0.1f / %0.1f = %0.1f\n", float1, float2, floatAnswer);
                }           
                break;
            case 5:
                // change to a while loop so you will be prompted get2Numbers() until both are integers
                printf("~MODULUS~\n\n");
                if (get2Numbers() == 1) {
                    intAnswer = int1 % int2;
                    printf("%d % %d = %d\n", int1, int2, intAnswer);
                } else {
                    printf("You can only enter integers for the modulus operation.");
                }
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
        pause(2); // wait 2 seconds before displaying menu again
    } while (operationChoice != 7);
}

int get2Numbers(void) {
    printf("Enter a number: ");
    scanf("%f", &float1);
    int1 = float1;
    printf("Enter another number: ");
    scanf("%f", &float2);
    int2 = float2;
    if (float1 - int1 == 0 && float2 - int2 == 0) {
        // Both numbers are integers
        return 1;
    } else {
        // One or both of the numbers are floats
        return 0;
    }
}

void pause(int pauseTime) {
    int currentTime = 0;
    int elapsedTime = 0;
    currentTime = time(NULL);
    do {
        elapsedTime = time(NULL);
    } while ((elapsedTime - currentTime) < pauseTime);
}