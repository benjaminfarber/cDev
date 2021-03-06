// Name: Ben Farber
// Date: 02.15.19
// Lab: 5
// Program Description: Generate a story from user input.

// BEGIN PREPROCESSOR DIRECTIVES

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAXINPUT 25

// END PREPROCESSOR DIRECTIVES

// BEGIN FUNCTION PROTOTYPES

int generateRandomNumber(int);
void getString(char *, int);
char* capitalize(char *);
char* uncapitalize(char *);

// END FUNCTION PROTOTYPES

// BEGIN MAIN FUNCTION

int main() {
	
	printf("-------------------------------------\n");
    printf("Welcome to the story telling program!\n");
    printf("-------------------------------------\n\n");

    // Get information to build story

    char name1[MAXINPUT] = {'\0'};
    printf("What is your first name? ");
    getString(name1, MAXINPUT);
    
    char food1[MAXINPUT] = {'\0'};
    printf("What is your favorite food? ");
    getString(food1, MAXINPUT);

    char adj1[MAXINPUT] = {'\0'};
    printf("What is an adjective you would use to describe yourself? ");
    getString(adj1, MAXINPUT);

    char place1[MAXINPUT] = {'\0'};
    printf("What city are you from? ");
    getString(place1, MAXINPUT);

    char job1[MAXINPUT] = {'\0'};
    printf("What is your job? ");
    getString(job1, MAXINPUT);

    char name2[MAXINPUT] = {'\0'};
    printf("What is your pet's name? ");
    getString(name2, MAXINPUT);

    char food2[MAXINPUT] = {'\0'};
    printf("What is the last thing you ate? ");
    getString(food2, MAXINPUT);

    char adj2[MAXINPUT] = {'\0'};
    printf("How has your day been so far? ");
    getString(adj2, MAXINPUT);

    char place2[MAXINPUT] = {'\0'};
    printf("What is your favorite city? ");
    getString(place2, MAXINPUT);

    char job2[MAXINPUT] = {'\0'};
    printf("What is your dream job? ");
    getString(job2, MAXINPUT);

    char name3[MAXINPUT] = {'\0'};
    printf("Who is your best friend? ");
    getString(name3, MAXINPUT);

    char food3[MAXINPUT] = {'\0'};
    printf("What is the worst thing you've ever eaten? ");
    getString(food3, MAXINPUT);

    char adj3[MAXINPUT] = {'\0'};
    printf("What is an adjective you would use to describe your best friend? ");
    getString(adj3, MAXINPUT);

    char job3[MAXINPUT] = {'\0'};
    printf("What is one of your parent's jobs? ");
    getString(job3, MAXINPUT);

    char place3[MAXINPUT] = {'\0'};
    printf("Where is the last place you went on vacation to? ");
    getString(place3, MAXINPUT);

    printf("\n-------------------\n");
    printf("Generating Story...\n");
    printf("-------------------\n\n");

    char *mainCharacter = name1;
    char *mainCharBFF = name2;
    char *breakfast = food1;
    char *lunch = food2;
    char *friendLunch = food3;
    char *adjective1 = adj1;
    char *adjective2 = adj2;
    char *adjective3 = adj3;
    char *childhoodPlace = place1;
    char *currentPlace = place2;
    char *vacationPlace = place3;
    char *mainCJob = job1;
    char *mainCDreamJob = job2;
    char *friendJob = job3;        

    // Print Story

    printf("This is a story about %s %s. Every day, when %s wakes up,\n", uncapitalize(adjective1), capitalize(mainCharacter), capitalize(mainCharacter));
    printf("%s has to make breakfast. Today, %s decided to make %s.\n",capitalize(mainCharacter), capitalize(mainCharacter), uncapitalize(breakfast));
    printf("After %s finished the %s, %s had to go to work. %s\n", capitalize(mainCharacter), uncapitalize(breakfast), capitalize(mainCharacter), capitalize(mainCharacter));
    printf("was a %s, but always dreamed of being a %s. %s had a best\n", uncapitalize(mainCJob), uncapitalize(mainCDreamJob), capitalize(mainCharacter));
    printf("friend named %s who was a %s %s. They knew each other from\n", capitalize(mainCharBFF), uncapitalize(adjective2), uncapitalize(friendJob));
    printf("%s, where they grew up together. Now, they both\n", capitalize(childhoodPlace));
    printf("live in %s. They went to lunch together that day. %s\n", capitalize(currentPlace), capitalize(mainCharacter));
    printf("had %s for lunch and %s had %s. They were %s that day because\n", uncapitalize(lunch), capitalize(mainCharBFF), uncapitalize(friendLunch), uncapitalize(adjective3));
    printf("it was their last day at work before their big trip to %s.\n", capitalize(vacationPlace));
    printf("But that trip will have to be told another time!\n\n");

    return 0;
}

// END MAIN FUNCTION

// BEGIN FUNCTION DEFINITIONS

int generateRandomNumber(int largestNumber) {
    srand(time(NULL));
    return rand() % largestNumber;
}

void getString(char *str, int size) {
    fgets(str,size,stdin);                          // Use fgets to allow more than one word entires
    str[strlen(str)-1] = '\0';                      // Replace '\n' from fgets() with '\0' for formatting.
}

char* capitalize(char *str) {
    str[0] = toupper(str[0]);
    return str;
}

char* uncapitalize(char *str) {
    str[0] = tolower(str[0]);
    return str;
}

// END FUNCTION DEFINITIONS
