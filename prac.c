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
// void capitalize(char *);
// void uncapitalize(char *);

// END FUNCTION PROTOTYPES

// BEGIN MAIN FUNCTION

int main() {
	
	printf("-------------------------------------\n");
    printf("Welcome to the story telling program!\n");
    printf("-------------------------------------\n\n");
    
    char yourFirstName[MAXINPUT] = {'\0'};
    printf("What is your first name? ");
    getString(yourFirstName, MAXINPUT);
    
    char hometown[MAXINPUT] = {'\0'};
    printf("What city are you from? ");
    getString(hometown, MAXINPUT);

    char favoriteFood[MAXINPUT] = {'\0'};
    printf("What is your favorite food? ");
    getString(favoriteFood, MAXINPUT);

    char personalDescription1[MAXINPUT] = {'\0'};
    printf("What is an adjective you would use to describe yourself? ");
    getString(personalDescription1, MAXINPUT);

    char personalDescription2[MAXINPUT] = {'\0'};
    printf("How has your day been so far? ");
    getString(personalDescription2, MAXINPUT);

    char personalDescription3[MAXINPUT] = {'\0'};
    printf("What is an adjective you would use to describe your best friend? ");
    getString(personalDescription3, MAXINPUT);

    char petName[MAXINPUT] = {'\0'};
    printf("What is your pet's name? ");
    getString(petName, MAXINPUT);

    char lastFood[MAXINPUT] = {'\0'};
    printf("What is the last thing you ate? ");
    getString(lastFood, MAXINPUT);

    char favoritePlace[MAXINPUT] = {'\0'};
    printf("What is your favorite city? ");
    getString(favoritePlace, MAXINPUT);

    char yourJob[MAXINPUT] = {'\0'};
    printf("What is your job? ");
    getString(yourJob, MAXINPUT);

    char yourDreamJob[MAXINPUT] = {'\0'};
    printf("What is your dream job? ");
    getString(yourDreamJob, MAXINPUT);

    char grossFood[MAXINPUT] = {'\0'};
    printf("What is the worst thing you've ever eaten? ");
    getString(grossFood, MAXINPUT);

    char bestFriend[MAXINPUT] = {'\0'};
    printf("Who is your best friend? ");
    getString(bestFriend, MAXINPUT);

    char parentJob[MAXINPUT] = {'\0'};
    printf("What is one of your parent's jobs? ");
    getString(parentJob, MAXINPUT);

    char vacation[MAXINPUT] = {'\0'};
    printf("Where is the last place you went on vacation to? ");
    getString(vacation, MAXINPUT);

    char *names[3] = {yourFirstName, petName, bestFriend};
    
    char *foods[5] = {favoriteFood, lastFood, grossFood};

    char *adjectives[3] = {personalDescription1, personalDescription2, personalDescription3};

    char *places[3] = {hometown, favoritePlace, vacation};

    char *job[3] = {yourJob, yourDreamJob, parentJob};

    printf("\n-------------------\n");
    printf("Generating Story...\n");
    printf("-------------------\n\n");

    // Generate Names
    char *mainCharacter = names[generateRandomNumber(3)];
    char *mainCharBFF = names[generateRandomNumber(3)];
    while (strcmp(mainCharacter, mainCharBFF) == 0)
        mainCharBFF = names[generateRandomNumber(3)];
    
    // Generate Foods
    char *breakfast = foods[generateRandomNumber(3)];
    char *lunch = foods[generateRandomNumber(3)];
    while (strcmp(breakfast, lunch) == 0)
        lunch = foods[generateRandomNumber(3)];
    char *friendLunch = foods[generateRandomNumber(3)];
    while (strcmp(breakfast,friendLunch) == 0 | strcmp(lunch, friendLunch) == 0)
        friendLunch = foods[generateRandomNumber(3)];

    // Generate Jobs
    char *mainCJob = job[generateRandomNumber(3)];
    char *mainCDreamJob = job[generateRandomNumber(3)];
    while (strcmp(mainCDreamJob, mainCJob) == 0)
        mainCDreamJob = job[generateRandomNumber(3)];
    char *friendJob = job[generateRandomNumber(3)];
    while (strcmp(mainCJob, friendJob) == 0 || strcmp(mainCDreamJob, friendJob) == 0)
        friendJob = job[generateRandomNumber(3)];

    // Generate Adjectives
    char *adj1 = adjectives[generateRandomNumber(3)];
    char *adj2 = adjectives[generateRandomNumber(3)];
    while (strcmp(adj1, adj2) == 0)
        adj2 = adjectives[generateRandomNumber(3)];
    char *adj3 = adjectives[generateRandomNumber(3)];
    while (strcmp(adj1, adj3) == 0 || strcmp(adj2,adj3) == 0)
        adj3 = adjectives[generateRandomNumber(3)];
    
    // Generate Places
    char *childhoodPlace = places[generateRandomNumber(3)];
    char *currentPlace = places[generateRandomNumber(3)];
    while (strcmp(childhoodPlace, currentPlace) == 0)
        currentPlace = places[generateRandomNumber(3)];
    char *vacationPlace = places[generateRandomNumber(3)];
    while (strcmp(childhoodPlace, vacationPlace) == 0 || strcmp(currentPlace, vacationPlace) == 0)
        vacationPlace = places[generateRandomNumber(3)];

    printf("This is a story about %s %s. Every day, when %s wakes up,\n", adj1, mainCharacter, mainCharacter);
    printf("%s has to make breakfast. Today, %s decided to make %s.\n", mainCharacter, mainCharacter, breakfast);
    printf("After %s finished the %s, %s had to go to work. %s\n", mainCharacter, breakfast, mainCharacter, mainCharacter);
    printf("was a %s, but always dreamed of being a %s. %s had a best\n", mainCJob, mainCDreamJob, mainCharacter);
    printf("friend named %s who was a %s %s. They knew each other from\n", mainCharBFF, adj2, friendJob);
    printf("%s, where they grew up together. Now, they both\n", childhoodPlace);
    printf("live in %s. They went to lunch together that day. %s\n", currentPlace, mainCharacter);
    printf("had %s for lunch and %s had %s. They were %s that day because\n", lunch, mainCharBFF, friendLunch, adj3);
    printf("it was their last day at work before their big trip to %s.\n", vacationPlace);
    printf("But that trip will have to be told another time!\n");
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

// void capitalize(char *) {
// }

// void uncapitalize(char *) {
// }

// END FUNCTION DEFINITIONS
