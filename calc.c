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

void pause(int pauseTime) {
    int currentTime = 0;
    int elapsedTime = 0;
    currentTime = time(NULL);
    do {
        elapsedTime = time(NULL);
    } while ((elapsedTime - currentTime) < pauseTime);
}