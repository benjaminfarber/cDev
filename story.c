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

int generateRandomNumber(int);
void pause(int);

// END FUNCTION PROTOTYPES

// BEGIN MAIN FUNCTION

int main() {

    printf("\nWelcome to the story telling program!\n\n");
    printf("You will be presented with a series of questions\n");
    printf("and a story will be generated from your input.\n\n");
    printf("!! Input can only be one word !!\n\n");
    printf("-------------------------------------------------\n\n");
    
    char yourFirstName[25] = {'\0'};
    printf("What is your first name? ");
    scanf("%s", yourFirstName);
    
    char hometown[25] = {'\0'};
    printf("What city are you from? ");
    scanf("%s", hometown);

    char favoriteFood[25] = {'\0'};
    printf("What is your favorite food? ");
    scanf("%s", favoriteFood);

    char personalDescription1[25] = {'\0'};
    printf("What is an adjective you would use to describe yourself? ");
    scanf("%s", personalDescription1);

    char personalDescription2[25] = {'\0'};
    printf("What is another adjective you would use to describe yourself? ");
    scanf("%s", personalDescription2);

    char personalDescription3[25] = {'\0'};
    printf("What is another adjective you would use to describe yourself? ");
    scanf("%s", personalDescription3);

    char petName[25] = {'\0'};
    printf("What is your pet's name? ");
    scanf("%s", petName);

    char lastFood[25] = {'\0'};
    printf("What is the last thing you ate? ");
    scanf("%s", lastFood);

    char favoritePlace[25] = {'\0'};
    printf("What is your favorite city? ");
    scanf("%s", favoritePlace);

    char yourJob[25] = {'\0'};
    printf("What is your job? ");
    scanf("%s", yourJob);

    char yourDreamJob[25] = {'\0'};
    printf("What is your dream job? ");
    scanf("%s", yourDreamJob);

    char grossFood[25] = {'\0'};
    printf("What is the worst thing you've ever eaten? ");
    scanf("%s", grossFood);

    char bestFriend[25] = {'\0'};
    printf("Who is your best friend? ");
    scanf("%s", bestFriend);

    char parentJob[25] = {'\0'};
    printf("What is one of your parent's job? ");
    scanf("%s", parentJob);

    char vacation[25] = {'\0'};
    printf("Where is the last place you went on vacation to? ");
    scanf("%s", vacation);

    char *names[3] = {yourFirstName, petName, bestFriend};
    
    char *foods[5] = {favoriteFood, lastFood, grossFood};

    char *adjectives[3] = {personalDescription1, personalDescription2, personalDescription3};

    char *places[3] = {hometown, favoritePlace, vacation};

    char *job[3] = {yourJob, yourDreamJob, parentJob};

    pause(2);

    printf("Generating Story...\n");

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

    printf("The story...\n");
    printf("-------------------------------------------------\n\n");
    printf("This is a story about %s %s. Every day, when %s wakes up,\n", adj1, mainCharacter, mainCharacter);
    printf("%s has to make breakfast. Today, %s decided to make %s.\n", mainCharacter, mainCharacter, breakfast);
    printf("After %s finished the %s, %s had to go to work. %s\n", mainCharacter, breakfast, mainCharacter, mainCharacter);
    printf("was a %s, but always dreamed of being a %s.\n", mainCJob, mainCDreamJob);
    printf("%s had a best friend named %s who was a %s %s. They\nknew each other ", mainCharacter, mainCharBFF, adj2, friendJob);
    printf("from %s, where they grew up together.\nNow, they both live in %s. ", childhoodPlace, currentPlace);
    printf("They went to lunch together that day. %s had %s for lunch and %s\n", mainCharacter, lunch, mainCharBFF);
    printf("had %s. They were %s that day because it was their last day at work\n", friendLunch, adj3);
    printf("before their big trip to %s. But that trip will have to be told another time!\n", vacationPlace);

    return 0;
}

// END MAIN FUNCTION

// BEGIN FUNCTION DEFINITIONS

int generateRandomNumber(int largestNumber) {
    srand(time(NULL));
    return rand() % largestNumber;
}

void pause(int waitTime) {
    int currentTime = 0;
    int passedTime = 0;
    currentTime = time( NULL);
    do {
        passedTime = time( NULL);
    } while ((passedTime - currentTime) < waitTime);
}

// END FUNCTION DEFINITIONS