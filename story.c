// Name: Ben Farber
// Date: 02.15.19
// Lab: 5
// Program Description: Incorporate user input into a story that generates a new story
//                      each time the program is run.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

// BEGIN FUNCTION PROTOTYPES

char* capitalize(char *);
char* uncapitalize(char *);
int generateRandomNumber(void);

// END FUNCTION PROTOTYPES

// BEGIN MAIN FUNCTION

int main() {

    printf("\nWelcome to the story telling program!\n\n");
    printf("You will be presented with a series of questions\n");
    printf("and a story will be generated from your input.\n\n");
    
    int storyGenerator = generateRandomNumber();
    switch(storyGenerator) {
        case 1:
            printf("\nThe Grocery Store, by Ben Farber and %s", capitalize(yourName));
            break;
        case 2:
            printf("\nThe Road Trip, by Ben Farber and %s", capitalize(yourName));
            break;
        case 3:
            printf("\nThe Big Test, by Ben Farber and %s", capitalize(yourName));
    }
    
}

// END MAIN FUNCTION

// BEGIN FUNCTION DEFINITIONS

char* capitalize(char *str) {
    str[0] = toupper(str[0]);
    return str;
}

char* uncapitalize(char *str) {
    str[0] = tolower(str[0]);
    return str;
}

int generateRandomNumber(void) {
    srand(time(NULL));
    return (rand() % 3) + 1;
}

// END FUNCTION DEFINITIONS