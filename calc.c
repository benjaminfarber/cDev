/*
Name: Ben Farber
Date: 01.31.19
Lab: 4
Program Description: A calculator that adds, subtracts, multiplies, divides, 
    calculates the modulus, and tests if a number is prime.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// FUNCTION PROTOTYPES

void displayCalculatorOperations(void);
void add2Numbers(float, float);
void subtract2Numbers(float, float);
void multiply2Numbers(float, float);
void divide2Numbers(float, float);
void modulus2Numbers(int, int);
void primeTest(int);
void calcFactorial(int);
void calcPower(int, int);
void calcAverage(int);

// MAIN FUNCTION

int main() {

    // Define Variables
    float add1, add2;
    float sub1, sub2;
float mult1, mult2;
float div1, div2;
int mod1, mod2;
int primeArgument;
int factorialArgument;
int base, exponent;
int averageCount;


    printf("\n-- Welcome to the Calculator Program! --\n");
    printf("\t-- by Ben Farber --\n");
    char operationChoice = '0';
    do {
        displayCalculatorOperations();
        scanf("%c", &operationChoice);
        switch(operationChoice) {
            case '1':
                printf("\n\t-- ADDITION --\n");
                printf("\nEnter a number: ");
                scanf("%f", &add1);
                printf("\n%0.2f + ", add1);
                scanf("%f", &add2);
                add2Numbers(add1, add2);
                break;
            case '2':
                printf("\n\t-- SUBTRACTION --\n");
                printf("\nEnter a number: ");
                scanf("%f", &sub1);
                printf("\n%0.2f - ", sub1);
                scanf("%f", &sub2);
                subtract2Numbers(sub1, sub2);          
                break;
            case '3':                
                printf("\n\t-- MULTIPLICATION --\n");
                printf("\nEnter a number: ");
                scanf("%f", &mult1);
                printf("\n%0.2f x ", mult1);
                scanf("%f", &mult2);
                multiply2Numbers(mult1, mult2);       
                break;
            case '4':                
                printf("\n\t-- DIVISION --\n"); 
                printf("\nEnter a number: ");
                scanf("%f", &div1);
                printf("\n%0.2f / ", div1);
                scanf("%f", &div2);
                divide2Numbers(div1, div2);  
                break;
            case '5':                
                printf("\n\t-- MODULUS --\n");
                printf("\nEnter a number: ");
                scanf("%d", &mod1);
                printf("\n%d %% ", mod1);
                scanf("%d", &mod2);
                modulus2Numbers(mod1, mod2);
                break;
            case '6':                
                printf("\n\t-- PRIME? --\n");
                printf("\nEnter a number to test if it is prime: ");
                scanf("%d", &primeArgument);
                primeTest(primeArgument);
                break;
            case '7':                
                printf("\n\t-- FACTORIAL --\n");
                printf("\nEnter a number to calculate its factorial: ");
                scanf("%d", &factorialArgument);
                calcFactorial(factorialArgument);
                break;
            case '8':                
                printf("\n-- POWER --\n");
                printf("\nEnter the base: ");
                scanf("%d", &base);
                printf("\nEnter the exponent: ");
                scanf("%d", &exponent);
                calcPower(base, exponent);
                break;
            case '9':                
                printf("\n-- AVERAGE --\n");
                printf("\nHow many numbers would you like to take the average of?");
                printf("\nEnter a number: ");
                scanf("%d", &averageCount);
                calcAverage(averageCount);
                break;
            case 'q':
                printf("\nExiting calculator . . .\n");
                break;
            default:
                printf("\nInvalid Response.\n");
                break;
        }
    } while (operationChoice != 'q'); // Loops program unless a 0 is entered
    return 0;
} 

// END MAIN FUNCTION

// FUNCTION DEFINITIONS

void displayCalculatorOperations(void) {
    printf("\nCalculator Operations:\n\n");
    printf("[1] Addition\t\t[6] Prime Test\n");
    printf("[2] Subtraction\t\t[7] Factorial\n");
    printf("[3] Multiplication\t[8] Power\n");
    printf("[4] Division\t\t[9] Function\n");
    printf("[5] Modulus\t\t[q] Exit\n");
    printf("\nPlease choose an operation: ");
}

void add2Numbers(float num1, float num2) {

}

void subtract2Numbers(float num1, float num2) {

}

void multiply2Numbers(float num1, float num2) {

}

void divide2Numbers(float num1, float num2) {

}

void modulus2Numbers(int num1, int num2) {

}

void primeTest(int testNumber) {

}

void calcFactorial(int num) {

}

void calcPower(int baseNum, int exponentNum) {

}

void calcAverage(int size) {

}