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

// BEGIN FUNCTION PROTOTYPES

void displayCalculatorOperations(void);     // Show calculator options
void add2Numbers(float, float);             // Input two floats to be added
void subtract2Numbers(float, float);        // Input two floats to be subtracted
void multiply2Numbers(float, float);        // Input two floats to be multiplied
void divide2Numbers(float, float);          // Input two float to be divided
void modulus2Numbers(int, int);             // Input two integers to take the modulus
void primeTest(int);                        // Input a positive integer and test if it is prime
void calcFactorial(int);                    // Input a positive integer and calculate its factorial
void calcPower(float, int);                 // Input a float as a base and an integer as a exponent
void calcAverage(int);                      // Input the number of numbers you want to average
int floatToInt(float);                      // Input a float and convert it to an integer
int intTest(float);                         // Test if a number is an integer

// END FUNCTION PROTOTYPES

// BEGIN MAIN FUNCTION

int main() {

    // BEGIN DEFINE VARIABLES

    float add1, add2;
    float sub1, sub2;
    float mult1, mult2;
    float div1, div2;
    float mod1, mod2;
    float primeArgument;
    float factorialArgument;
    float base, exponent;
    float averageCount;
    int operationChoice = 0;
    
    // END DEFINE VARIABLES

    printf("\n-- Welcome to the Calculator Program! --\n");
    printf("\t-- by Ben Farber --\n");

    do {
        displayCalculatorOperations();
        scanf("%d", &operationChoice);
        switch(operationChoice) {
            case 1:
                printf("\n\t-- ADDITION --\n\n");
                printf("1: ");
                scanf("%f", &add1);
                printf("2: ");
                scanf("%f", &add2);
                add2Numbers(add1, add2);
                break;
            case 2:
                printf("\n\t-- SUBTRACTION --\n\n");
                printf("1: ");
                scanf("%f", &sub1);
                printf("2: ");
                scanf("%f", &sub2);
                subtract2Numbers(sub1, sub2);       
                break;
            case 3:                
                printf("\n\t-- MULTIPLICATION --\n\n");
                printf("1: ");
                scanf("%f", &mult1);
                printf("2: ");
                scanf("%f", &mult2);
                multiply2Numbers(mult1, mult2);     
                break;
            case 4:                
                printf("\n\t-- DIVISION --\n\n"); 
                printf("1: ");
                scanf("%f", &div1);
                printf("2: ");
                scanf("%f", &div2);
                divide2Numbers(div1, div2);
                break;
            case 5:                
                printf("\n\t-- MODULUS --\n\n");
                do {
                    printf("1: ");
                    scanf("%f", &mod1);
                    printf("2: ");
                    scanf("%f", &mod2);
                    if (intTest(mod1) != 1 || intTest(mod2) != 1 ||
                        mod1 < 0 || mod2 < 0) {
                        printf("\nYou must enter positive integers for this calcultion.\n\n");
                    } // Remind user only positive integers work for the modulus calculation
                } while (intTest(mod1) != 1 || intTest(mod2) != 1 ||
                         mod1 < 0 || mod2 < 0); // If input was incorrect, re-prompt user to input positive integers
                mod1 = floatToInt(mod1); // change data type to integer for modulus calculation
                mod2 = floatToInt(mod2); // change data type to integer for modulus calculation
                modulus2Numbers(mod1, mod2);
                break;
            case 6:                
                printf("\n\t-- PRIME? --\n");
                do {
                    printf("\nEnter a number: ");
                    scanf("%f", &primeArgument);
                    if (intTest(primeArgument) != 1 && primeArgument > 0) {
                        printf("\nYou must enter a positive integer for this calcultion.\n");
                    } // Remind user only positive integers work for the modulus calculation
                } while (intTest(primeArgument) != 1 && primeArgument > 0); /* If input was incorrect, 
                re-prompt user to input a positive integer */
                primeArgument = floatToInt(primeArgument); // change data type to integer for prime test
                primeTest(primeArgument);
                break;
            case 7:                
                printf("\n\t-- FACTORIAL --\n");
                do {
                    printf("\nFind x!, x = "); 
                    scanf("%f", &factorialArgument);
                    if (factorialArgument > 20) {
                        printf("\nDue to limits in storage, inputs greater than 20 do not work.\n");
                    } // Even an unsigned long long integer cant hold enough digits for inputs greater than 20
                    if (intTest(factorialArgument) != 1 || factorialArgument < 0) {
                        printf("\nYou must enter a positive integer for this calcultion.\n");
                    } // Remind user only positive integers work for the factorial calculation
                } while (intTest(factorialArgument) != 1 || factorialArgument < 0 || factorialArgument > 20); /* If input 
                was incorrect, re-prompt user to input a positive integer less than or equal to 20 */
                factorialArgument = floatToInt(factorialArgument); // change data type to integer for factorial calculation
                calcFactorial(factorialArgument);
                break;
            case 8:                
                printf("\n\t-- POWER --\n");
                do {
                    printf("\nBase: ");
                    scanf("%f", &base);
                    printf("Exponent: ");
                    scanf("%f", &exponent);
                    if (intTest(exponent) != 1) {
                            printf("\nThis program does not support non-integer exponents.\n");
                    }
                } while (intTest(exponent) != 1); /* If the exponent entered is not an integer 
                re-prompt the user to enter an integer */
                exponent = floatToInt(exponent); // change data type to integer for power calculation
                calcPower(base, exponent);
                break;
            case 9:                
                printf("\n\t-- AVERAGE --\n");
                printf("\nHow many numbers would you like\n");
                printf("to take the average of? -> ");
                scanf("%f", &averageCount);
                calcAverage(averageCount);
                break;
            case 0:
                printf("\nExiting calculator...\n\n");
                break;
            default:
                printf("\nInvalid response.\n\n");
                break;
        }
    } while (operationChoice != 0); // Loops program unless 0 is entered
    return 0;
} 

// END MAIN FUNCTION

// BEGIN FUNCTION DEFINITIONS

void displayCalculatorOperations(void) {
    printf("\n _______________________________________ \n");
    printf("|\t\t\t\t\t|\n");
    printf("|\tCalculator Operations:\t\t|\n");
    printf("|\t\t\t\t\t|\n");
    printf("|   [1] Addition\t[6] Prime Test\t|\n");
    printf("|   [2] Subtraction\t[7] Factorial\t|\n");
    printf("|   [3] Multiplication\t[8] Power\t|\n");
    printf("|   [4] Division\t[9] Average\t|\n");
    printf("|   [5] Modulus\t\t[0] Exit\t|\n");
    printf("|\t\t\t\t\t|\n");
    printf("|_______________________________________|\n\n");
    printf("\nPlease choose an operation: ");
}

void add2Numbers(float num1, float num2) {
    float answer;
    answer = num1 + num2;
    printf("\n%0.2f + %0.2f = %0.2f\n", num1, num2, answer);
}

void subtract2Numbers(float num1, float num2) {
    float answer;
    answer = num1 - num2;
    printf("\n%0.2f - %0.2f = %0.2f\n", num1, num2, answer);
}

void multiply2Numbers(float num1, float num2) {
    float answer;
    answer = num1 * num2;
    printf("\n%0.2f * %0.2f = %0.2f\n", num1, num2, answer);
}

void divide2Numbers(float num1, float num2) {
    float answer;
    answer = num1 / num2;
    printf("\n%0.2f / %0.2f = %0.2f\n", num1, num2, answer);
}

void modulus2Numbers(int num1, int num2) {
    int answer;
    answer = num1 % num2;
    printf("\n%d %% %d = %d\n", num1, num2, answer);
}

void primeTest(int testNumber) {
    bool isPrime = true; /* Condition to alter if testNumber 
    is found to have a factor other than 1 and testNumber */
    if (testNumber <= 1) {
        printf("\n%d is not prime.\n", testNumber);
        isPrime = false;
    } // All negative numbers, 0, and 1 are not prime
    else if (testNumber == 2) {
        isPrime = true;
    } // 2 is a prime number
    else if (testNumber % 2 == 0 && testNumber != 2) {
        printf("\n%d is not prime.\n", testNumber);
        // Show factors to demonstrate an example of why testNumber is not prime
        printf("%d x 2 = %d\n", testNumber / 2, testNumber); 
        isPrime = false;
    } // Even numbers (excluding 2) are not prime
    else {
        int denominatorInt = 0;
        for (denominatorInt = 2; denominatorInt < (testNumber / 2); denominatorInt++) {
            if (testNumber % denominatorInt == 0) {
                printf("\n%d is not prime.\n", testNumber);
                // Show factors to demonstrate an example of why testNumber is not prime
                printf("%d x %d = %d\n", denominatorInt, testNumber / denominatorInt, testNumber); 
                isPrime = false;
                break;
            } // Test if testNumber can be divided by all numbers between 2 and half of testNumber
        } 
    } // If testNumber can't be divided by numbers other than 1 and itself, it is prime
    if (isPrime) {
        printf("\n%d is a prime number.\n", testNumber);
    } // If no factors for testNumber are found, isPrime remains true (testNumber is prime)
}

void calcFactorial(int num) {
    int i, tempProduct, tempProductMinusOne;
    unsigned long long int product;
    tempProduct = num; // Store the developing product in this variable
    tempProductMinusOne = num - 1;
    for (i = 1; i < num; i ++) {
        tempProduct *= tempProductMinusOne--;
    }
    product = tempProduct;
    printf("\n%d! = %lld\n", num, product);
}

void calcPower(float baseNum, int exponentNum) {
    int i;
    float tempProduct = 1.0; // Store the developing product in this variable
    double product;
    if (exponentNum >= 0) {
        for (i = 0; i < exponentNum; i++) {
            tempProduct *= baseNum;
        }
        product = tempProduct;
        printf("\n%0.2f ^ %d = %0.3lf\n", baseNum, exponentNum, product);
    } // For a positive exponentNum, multiply baseNum by itself exponentNum times
    else {
        for (i = exponentNum; i < 0; i++) {
            tempProduct *= baseNum;
        }
        product = 1 / tempProduct;
        printf("\n%0.2f ^ %d = %0.3lf\n", baseNum, exponentNum, product);
    } // For a negative exponentNum, multiply baseNum by itself exponentNum times then take the inverse
}

void calcAverage(int size) {
    float averageArray[size], sum, average;
    int i;
    sum = 0;
    for (i = 0; i < size; i++) {
        printf("%d: ", i + 1);
        scanf("%f", &averageArray[i]);
        sum += averageArray[i];
    } // Build the array from user input then add the numbers together
    average = sum / size;
    printf("\nThe average of the %d numbers is %0.2f\n", size, average);

}

int floatToInt (float floatInput) {
    int intOutput = floatInput;
    return intOutput;
}

int intTest(float float1) {
    int int1 = float1;
    if (float1 - int1 == 0)
        return 1;
    else
        return 0;
}

// END FUNCTION DEFINITIONS