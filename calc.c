/*
Name: Ben Farber
Date: 01.22.19
Lab: 3
Program Description: A calculator that adds, subtracts, multiplies, divides, 
    calculates the modulus, and tests if a number is prime.
*/

#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void displayCalculatorOperations(void);
int get2Numbers(void);
int get1Number(void);
void add2Numbers(void);
void sub2Numbers(void);
void mult2Numbers(void);
void div2Numbers(void);
void mod2Numbers(void);

// Global Variables
int int1 = 0;
int int2 = 0;
int intAnswer = 0;
float float1 = 0.0;
float float2 = 0.0;
float floatAnswer = 0.0;

int main() {
    int operationChoice = 0;
    float operationChoiceInput = 0;
    do {
        displayCalculatorOperations();
        printf("\nPlease choose an operation: ");
        scanf("%f", &operationChoiceInput);
        operationChoice = operationChoiceInput;
        if (operationChoiceInput - operationChoice != 0) {
            operationChoice = 0;
        }
        switch(operationChoice) {
            case 1:
                printf("\n~ADDITION~\n\n");
                add2Numbers();
                break;
            case 2:
                printf("\n~SUBTRACTION~\n\n");
                sub2Numbers();          
                break;
            case 3:
                printf("\n~MULTIPLICATION~\n\n");
                mult2Numbers();       
                break;
            case 4:
                printf("\n~DIVISION~\n\n"); 
                div2Numbers();  
                break;
            case 5:
                printf("\n~MODULUS~\n\n");
                mod2Numbers();
                break;
            case 6:
                printf("\n~PRIME~\n\n");
                
                break;
            case 7:
                printf("\nExiting Calculator...\n\n");
                break;
            default:
                printf("\nInvalid Response.\n");
                break;
        }
    } while (operationChoice != 7);
    return 0;
}

void displayCalculatorOperations(void) {
    printf("\nCalculator Operations:\n");
    printf("[1] Addition\n");
    printf("[2] Subtraction\n");
    printf("[3] Multiplication\n");
    printf("[4] Division\n");
    printf("[5] Modulus (integers only)\n");
    printf("[6] Test if prime (Integers only\n");
    printf("[7] Exit\n");
}

int get2Numbers(void) {
    printf("Enter a number: ");
    scanf("%f", &float1);
    int1 = float1;
    printf("Enter another number: ");
    scanf("%f", &float2);
    int2 = float2;
    if (float1 - int1 == 0 && float2 - int2 == 0) 
        return 1; // Both numbers are integers
    else 
        return 0; // One or both of the numbers are floats
}

int get1Number(void) {
    printf("Enter a number (integers only): ");
    scanf("%f", &float1);
    int1 = float1;
    if (float1 - int1 == 0) 
        return 1; // Number is an integer
    else 
        return 0; // Number is a float
}

void add2Numbers(void) {
    if (get2Numbers() == 1) {
        intAnswer = int1 + int2;
        printf("--------------------------\n");
        printf("%d + %d = %d\n", int1, int2, intAnswer);
        printf("--------------------------\n");
    } else {
        floatAnswer = float1 + float2;
        printf("--------------------------\n");
        printf("%0.1f + %0.1f = %0.1f\n", float1, float2, floatAnswer);
        printf("--------------------------\n");
    }  
}

void sub2Numbers(void) {
    if (get2Numbers() == 1) {
        intAnswer = int1 - int2;
        printf("--------------------------\n");
        printf("%d - %d = %d\n", int1, int2, intAnswer);
        printf("--------------------------\n");
    } else {
        floatAnswer = float1 - float2;
        printf("--------------------------\n");
        printf("%0.1f - %0.1f = %0.1f\n", float1, float2, floatAnswer);
        printf("--------------------------\n");
    }
}

void mult2Numbers(void) {
    if (get2Numbers() == 1) {
        intAnswer = int1 * int2;
        printf("--------------------------\n");
        printf("%d x %d = %d\n", int1, int2, intAnswer);
        printf("--------------------------\n");
    } else {
        floatAnswer = float1 * float2;
        printf("--------------------------\n");
        printf("%0.1f x %0.1f = %0.2f\n", float1, float2, floatAnswer);
        printf("--------------------------\n");
    } 
}

void div2Numbers(void) {
    if (get2Numbers() == 1) {
        floatAnswer = float1 / float2;
        printf("--------------------------\n");
        printf("%0.0f / %0.0f = %0.2f\n", float1, float2, floatAnswer);
        printf("--------------------------\n");
    }
    else {
        floatAnswer = float1 / float2;
        printf("--------------------------\n");
        printf("%0.1f / %0.1f = %0.2f\n", float1, float2, floatAnswer);
        printf("--------------------------\n");
    }
}

void mod2Numbers(void) {
    int intCheck = 0;
    do {
        intCheck = get2Numbers();
        if (intCheck == 1) {
            intAnswer = int1 % int2;
            printf("--------------------------\n");
            printf("%d %% %d = %d\n", int1, int2, intAnswer);
            printf("--------------------------\n");
        } else {
            printf("You can only enter integers for the modulus operation.\n");
            printf("Try entering integers.\n\n");
        }
    } while (intCheck != 1);
}