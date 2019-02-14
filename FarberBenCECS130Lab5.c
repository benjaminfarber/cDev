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

    // Build arrays to sort inputs into categories

    char *names[3] = {name1, name2, name3};
    
    char *foods[5] = {food1, food2, food3};

    char *adjectives[3] = {adj1, adj2, adj3};

    char *places[3] = {place1, place2, place3};

    char *job[3] = {job1, job2, job3};

    printf("\n-------------------\n");
    printf("Generating Story...\n");
    printf("-------------------\n\n");

    // Initialize Names
    char *mainCharacter = {'\0'};
    char *mainCharBFF = {'\0'};
    
    // Initialize Foods
    char *breakfast = {'\0'};
    char *lunch = {'\0'};
    char *friendLunch = {'\0'};

    // Initialize Adjectives
    char *adjective1 = {'\0'};
    char *adjective2 = {'\0'};
    char *adjective3 = {'\0'};

    // Initialize Places
    char *childhoodPlace = {'\0'};
    char *currentPlace = {'\0'};
    char *place3Place = {'\0'};

    // Initialize Jobs
    char *mainCJob = {'\0'};
    char *mainCDreamJob = {'\0'};
    char *friendJob = {'\0'};

    int randomizer = 0;
        
    // Generate Names
    randomizer = generateRandomNumber(3);
    switch(randomizer) {
        case 1:
            mainCharacter = names[0];
            mainCharBFF = names[1];
            break;
        case 2:
            mainCharacter = names[1];
            mainCharBFF = names[2];       
            break;
        case 3:
            mainCharacter = names[2];
            mainCharBFF = names[0];
            break;
    }

    // Generate Foods
    randomizer = generateRandomNumber(3);
    switch(randomizer) {
        case 1:
            breakfast = foods[0];
            lunch = foods[1];
            friendLunch = foods[2];
            break;
        case 2:
            breakfast = foods[1];
            lunch = foods[2];
            friendLunch = foods[0];
            break;
        case 3:
            breakfast = foods[2];
            lunch = foods[0];
            friendLunch = foods[1];
            break;
    }

    // Generate Adjectives
    randomizer = generateRandomNumber(3);
    switch(randomizer) {
        case 1:
            adjective1 = adjectives[0];
            adjective2 = adjectives[1];
            adjective3 = adjectives[2];
            break;
        case 2:
            adjective1 = adjectives[1];
            adjective2 = adjectives[2];
            adjective3 = adjectives[0];
            break;
        case 3:
            adjective1 = adjectives[2];
            adjective2 = adjectives[0];
            adjective3 = adjectives[1];
            break;
    }

    // Generate Places
    randomizer = generateRandomNumber(3);
    switch(randomizer) {
        case 1:
            childhoodPlace = places[0];
            currentPlace = places[1];
            place3Place = places[2];
            break;
        case 2:
            childhoodPlace = places[1];
            currentPlace = places[2];
            place3Place = places[0];
            break;
        case 3:
            childhoodPlace = places[2];
            currentPlace = places[0];
            place3Place = places[1];
            break;
    }

    randomizer = generateRandomNumber(3);
    switch(randomizer) {
        case 1:
            mainCJob = job[0];
            mainCDreamJob = job[1];
            friendJob = job[2];
            break;
        case 2:
            mainCJob = job[1];
            mainCDreamJob = job[2];
            friendJob = job[0];
            break;
        case 3:
            mainCJob = job[2];
            mainCDreamJob = job[0];
            friendJob = job[1];
            break;
    }


    printf("This is a story about %s %s. Every day, when %s wakes up,\n", adjective1, mainCharacter, mainCharacter);
    printf("%s has to make breakfast. Today, %s decided to make %s.\n", mainCharacter, mainCharacter, breakfast);
    printf("After %s finished the %s, %s had to go to work. %s\n", mainCharacter, breakfast, mainCharacter, mainCharacter);
    printf("was a %s, but always dreamed of being a %s. %s had a best\n", mainCJob, mainCDreamJob, mainCharacter);
    printf("friend named %s who was a %s %s. They knew each other from\n", mainCharBFF, adjective2, friendJob);
    printf("%s, where they grew up together. Now, they both\n", childhoodPlace);
    printf("live in %s. They went to lunch together that day. %s\n", currentPlace, mainCharacter);
    printf("had %s for lunch and %s had %s. They were %s that day because\n", lunch, mainCharBFF, friendLunch, adjective3);
    printf("it was their last day at work before their big trip to %s.\n", place3);
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