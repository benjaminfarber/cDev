/*
Name: Ben Farber
Date: 01.22.19
Lab: 3
Program Description: A calculator that adds, subtracts, multiplies, divides, 
    calculates the modulus, and tests if a number is prime.
*/

#include <stdio.h>
#include <stdlib.h>

// FUNCTION PROTOTYPES

void displayCalculatorOperations(void);
int get2Numbers(void);
int get1Number(void);
void add2Numbers(void);
void sub2Numbers(void);
void mult2Numbers(void);
void div2Numbers(void);
void mod2Numbers(void);
void primeTest(void);

// GLOBAL VARIABLES

int int1 = 0;
int int2 = 0;
int intAnswer = 0;
float float1 = 0.0;
float float2 = 0.0;
float floatAnswer = 0.0;

// MAIN FUNCTION

int main() {
    printf("\n\t-- Welcome to the Calculator Program! --\n");
    printf("\t\t-- by Ben Farber --\n");
    int operationChoice = 0;
    float operationChoiceInput = 0;
    do {
        displayCalculatorOperations();
        printf("\nPlease choose an operation: ");
        scanf("%f", &operationChoiceInput);
        operationChoice = operationChoiceInput; // convert float input to integer
        if (operationChoiceInput - operationChoice != 0) {
            operationChoice = 0;
        } // If input is a float, force switch to output default
        switch(operationChoice) {
            case 1:
                printf("\n\t-- ADDITION --\n\n");
                add2Numbers();
                break;
            case 2:
                printf("\n\t-- SUBTRACTION --\n\n");
                sub2Numbers();          
                break;
            case 3:
                printf("\n\t-- MULTIPLICATION --\n\n");
                mult2Numbers();       
                break;
            case 4:
                printf("\n\t-- DIVISION --\n\n"); 
                div2Numbers();  
                break;
            case 5:
                printf("\n\t-- MODULUS --\n\n");
                mod2Numbers();
                break;
            case 6:
                printf("\n\t-- PRIME? --\n\n");
                primeTest();
                break;
            case 7:
                printf("\nExiting Calculator...\n\n");
                break;
            default:
                printf("\nInvalid Response.\n");
                break;
        }
    } while (operationChoice != 7); // Loops program unless a 7 is entered
    return 0;
} 

// END MAIN FUNCTION

// FUNCTION DEFINITIONS

void displayCalculatorOperations(void) {
    printf("\nCalculator Operations:\n\n");
    printf("[1] Addition\n");
    printf("[2] Subtraction\n");
    printf("[3] Multiplication\n");
    printf("[4] Division\n");
    printf("[5] Modulus\n");
    printf("[6] Prime Test\n");
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
    printf("Enter a number: ");
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
    } // Add two integers
    else {
        floatAnswer = float1 + float2;
        printf("--------------------------\n");
        printf("%0.1f + %0.1f = %0.1f\n", float1, float2, floatAnswer);
        printf("--------------------------\n");
    } // Add to floats
}

void sub2Numbers(void) {
    if (get2Numbers() == 1) {
        intAnswer = int1 - int2;
        printf("--------------------------\n");
        printf("%d - %d = %d\n", int1, int2, intAnswer);
        printf("--------------------------\n");
    } // Subtract two integers
    else {
        floatAnswer = float1 - float2;
        printf("--------------------------\n");
        printf("%0.1f - %0.1f = %0.1f\n", float1, float2, floatAnswer);
        printf("--------------------------\n");
    } // Subtract two floats
}

void mult2Numbers(void) {
    if (get2Numbers() == 1) {
        intAnswer = int1 * int2;
        printf("--------------------------\n");
        printf("%d x %d = %d\n", int1, int2, intAnswer);
        printf("--------------------------\n");
    } // Multiply two integers
    else {
        floatAnswer = float1 * float2;
        printf("--------------------------\n");
        printf("%0.1f x %0.1f = %0.2f\n", float1, float2, floatAnswer);
        printf("--------------------------\n");
    } // Multiply two floats
}

void div2Numbers(void) {
    if (get2Numbers() == 1) {
        floatAnswer = float1 / float2;
        printf("--------------------------\n");
        printf("%0.0f / %0.0f = %0.2f\n", float1, float2, floatAnswer);
        printf("--------------------------\n");
    } // Divide two floats but display inputs as integers
    else {
        floatAnswer = float1 / float2;
        printf("--------------------------\n");
        printf("%0.1f / %0.1f = %0.2f\n", float1, float2, floatAnswer);
        printf("--------------------------\n");
    } // Divide two floats and display inputs as floats
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
        } // If inputs are integers, calculate the modulus of the two numbers
        else {
            printf("\nYou can only enter integers for the modulus operation.\n");
            printf("Try entering integers.\n\n");
        } // If one or both of the inputs is not an integer, remind the user to enter integers
    } while (intCheck != 1); // Prompt user to enter two numbers until both inputs are integers
}

void primeTest(void) {
    int intCheck = 0;
    int isNotPrime = 0; // Set value to false
    do {
        intCheck = get1Number();
        printf("\nChecking if %d is prime...\n\n", int1);
        if (intCheck == 1) {
            if (int1 == 1) {
                printf("--------------------------\n");
                printf("%d is not prime.\n", int1);
                printf("1 can only be divided by itself.\n");
                printf("--------------------------\n");
                isNotPrime = 1;
            } // 1 is not a prime number
            else if (int1 == 2) {
                isNotPrime = 0;
            } // 2 is a prime number
            else if (int1 % 2 == 0 && int1 != 2) {
                printf("--------------------------\n");
                printf("%d is not prime.\n", int1);
                printf("%d x 2 = %d\n", int1 / 2, int1);
                printf("--------------------------\n");
                isNotPrime = 1;
            } // Even numbers (excluding 2) are not prime
            else {
                for (int denominatorInt = 2; denominatorInt < (int1 / 2); denominatorInt++) {
                    if (int1 % denominatorInt == 0) {
                        printf("--------------------------\n");
                        printf("%d is not prime.\n", int1);
                        printf("%d x %d = %d\n", denominatorInt, int1 / denominatorInt, int1);
                        printf("--------------------------\n");
                        isNotPrime = 1; // The input has been found to be not prime, so this becomes true
                        break;
                    } // Test if the input can be divided by all numbers between 2 and half the input
                } // If the input cant be divided by numbers other than 1 and itself, it is prime
            }
            if (isNotPrime == 0) {
                printf("--------------------------\n");
                printf("%d is a prime number.\n", int1);
                printf("--------------------------\n");
            } // If no factors for the input are found, isNotPrime remains false (aka the number is prime)
        } // If input is an integer, check if number is prime
        else {
            printf("\nYou can only enter an integer \nfor the prime test operation.\n");
            printf("Try entering an integer.\n\n");
        } // If input is not an integer, remind the user to enter an integer
    } while (intCheck != 1); // Promt user to enter a number until an integer is entered
}