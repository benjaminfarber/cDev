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
    printf("-------------------------------------------------\n\n");
    
    char yourFirstName[25] = {'\0'};
    printf("What is your first name? ");
    scanf("%s", yourFirstName);
    
    char hometown[25] = {'\0'};
    printf("What city are you from? ");
    scanf("%s", hometown);

    char favoriteColor[25] = {'\0'};
    printf("What is your favorite color? ");
    scanf("%s", favoriteColor);

    char favoriteFood[25] = {'\0'};
    printf("What is your favorite food? ");
    scanf("%s", favoriteFood);

    char personalDescription1[25] = {'\0'};
    printf("What is an adjective you would use to describe yourself? ");
    scanf("%s", personalDescription1);

    char personalDescription2[25] = {'\0'};
    printf("What is another adjective you would use to describe yourself? ");
    scanf("%s", personalDescription2);

    char petName[25] = {'\0'};
    printf("What is your pet's name? ");
    scanf("%s", petName);

    char lastFood[25] = {'\0'};
    printf("What is the last thing you ate? ");
    scanf("%s", lastFood);

    char favoritePlace[25] = {'\0'};
    printf("What is your favorite place? ");
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

    char *adjectives[3] = {favoriteColor, personalDescription1, personalDescription2};

    char *places[3] = {hometown, favoritePlace, vacation};

    char *job[3] = {yourJob, yourDreamJob, parentJob};

    pause(2);

    printf("Generating Story...\n");

    pause(2);

    system("clear");

    printf("The story...\n");
    printf("-------------------------------------------------\n\n");

    return 0;
}

// END MAIN FUNCTION

// BEGIN FUNCTION DEFINITIONS

int generateRandomNumber(int largestNumber) {
    srand(time(NULL));
    return (rand() % largestNumber) + 1;
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