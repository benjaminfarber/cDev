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
void collectNames(void);
void collectFoods(void);
void collectAdjectives(void);
void collectPlaces(void);
void collectJobs(void);

// END FUNCTION PROTOTYPES

// BEGIN MAIN FUNCTION

int main() {

    // Gather information from user

    char name1[25] = {'\0'};
    char name2[25] = {'\0'};
    char name3[25] = {'\0'};
    collectNames();

    char food1[25] = {'\0'};
    char food2[25] = {'\0'};
    char food3[25] = {'\0'};
    collectFoods();
    
    char adjective1[25] = {'\0'};
    char adjective2[25] = {'\0'};
    char adjective3[25] = {'\0'};
    collectAdjectives();

    char place1[25] = {'\0'};
    char place2[25] = {'\0'};
    char place3[25] = {'\0'};
    collectPlaces();
    
    char job1[25] = {'\0'};
    char job2[25] = {'\0'};
    char job3[25] = {'\0'};
    collectJobs();

    // Build arrays of strings to store user data

    char *names[3] = {name1, name2, name3};
    
    char *foods[5] = {food1, food2, food3};

    char *adjectives[3] = {adjective1, adjective2, adjective3};

    char *places[3] = {place1, place2, place3};

    char *job[3] = {job1, job2, job3};

    printf("\n-------------------------------------------------\n");
    printf("Generating Story...\n");
    printf("-------------------------------------------------\n\n");

    // Initialize Names
    char *mainCharacter = names[0];
    char *friendOfMainCharacter = names[1];
    
    // Initialize Foods
    char *breakfast = foods[0];
    char *lunch = foods[1];
    char *lunchForFriend = foods[2];

    // Initialize Jobs
    char *jobMainCharacter = job[0];
    char *jobDreamMainCharacter = job[1];
    char *jobOfFriend = job[2];

    // Initialize Adjectives
    char *adj1 = adjectives[0];
    char *adj2 = adjectives[1];
    char *adj3 = adjectives[2];
    
    // Initialize Places
    char *placeChildhood = places[0];
    char *placeToday = places[1];
    char *placeplace3 = places[2];

    // Print story

    printf("This is a story about %s %s. Every day, when %s wakes up,\n", adj1, mainCharacter, mainCharacter);
    printf("%s has to make breakfast. Today, %s decided to make %s.\n", mainCharacter, mainCharacter, breakfast);
    printf("After %s finished the %s, %s had to go to work. %s\n", mainCharacter, breakfast, mainCharacter, mainCharacter);
    printf("was a %s, but always dreamed of being a %s.\n", jobMainCharacter, jobDreamMainCharacter);
    printf("%s had a best friend named %s who was a %s %s. They\nknew each other ", mainCharacter, friendOfMainCharacter, adj2, jobOfFriend);
    printf("from %s, where they grew up together.\nNow, they both live in %s. ", placeChildhood, placeToday);
    printf("They went to lunch together that day.\n%s had %s for lunch and %s\n", mainCharacter, lunch, friendOfMainCharacter);
    printf("had %s. They were %s that day because it was their last day at work\n", lunchForFriend, adj3);
    printf("before their big trip to %s. But that trip will have to be told another time!\n", placeplace3);

    return 0;
}

// END MAIN FUNCTION

// BEGIN FUNCTION DEFINITIONS

int generateRandomNumber(int max) {
    srand(time(NULL));
    return rand() % max;
}

void collectNames(void) {
    int index = generateRandomNumber(3);
    switch(index) {
        case 1:
            printf("What is your first name? ");
            fgets(name1, 25, stdin);
            printf("What is your pet's name? ");
            fgets(name2, 25, stdin);
            printf("Who is your best friend? ");
            fgets(name3, 25, stdin);
            break;
        case 2:
            printf("What is your pet's name? ");
            fgets(name1, 25, stdin);
            printf("Who is your best friend? ");
            fgets(name2, 25, stdin);
            printf("What is your first name? ");
            fgets(name3, 25, stdin);
            break;
        case 3:
            printf("Who is your best friend? ");
            fgets(name1, 25, stdin);
            printf("What is your first name? ");
            fgets(name2, 25, stdin);
            printf("What is your pet's name? ");
            fgets(name3, 25, stdin);
            break;
    }
}

void collectFoods(void) {
    int index = generateRandomNumber(3);
    switch(index) {
        case 1:
            printf("What is your favorite food? ");
            fgets(food1, 25, stdin);
            printf("What is the last thing you ate? ");
            fgets(food2, 25, stdin);
            printf("What is the worst thing you've ever eaten? ");
            fgets(food3, 25, stdin);
            break;
        case 2:
            printf("What is the last thing you ate? ");
            fgets(food1, 25, stdin);
            printf("What is the worst thing you've ever eaten? ");
            fgets(food2, 25, stdin);
            printf("What is your favorite food? ");
            fgets(food3, 25, stdin);
            break;
        case 3:
            printf("What is the worst thing you've ever eaten? ");
            fgets(food1, 25, stdin);
            printf("What is your favorite food? ");
            fgets(food2, 25, stdin);
            printf("What is the last thing you ate? ");
            fgets(food3, 25, stdin);
            break;
    }
}

void collectAdjectives(void) {
    int index = generateRandomNumber(3);
    switch(index) {
        case 1:
            printf("What is an adjective you would use to describe yourself? ");
            fgets(adjective1, 25, stdin);
            printf("What is an adjective you would use to describe your best friend? ");
            fgets(adjective2, 25, stdin);
            printf("How is your day going so far? ");
            fgets(adjective3, 25, stdin);
            break;
        case 2:
            printf("What is an adjective you would use to describe your best friend? ");
            fgets(adjective1, 25, stdin);
            printf("How is your day going so far? ");
            fgets(adjective2, 25, stdin);
            printf("What is an adjective you would use to describe yourself? ");
            fgets(adjective3, 25, stdin);
            break;
        case 3:
            printf("How is your day going so far? ");
            fgets(adjective1, 25, stdin);
            printf("What is an adjective you would use to describe yourself? ");
            fgets(adjective2, 25, stdin);
            printf("What is an adjective you would use to describe your best friend? ");
            fgets(adjective3, 25, stdin);
            break;
    }
}

void collectPlaces(void) {
    int index = generateRandomNumber(3);
    switch(index) {
        case 1:
            printf("What city are you from? ");
            fgets(place1, 25, stdin);
            printf("What is your favorite city? ");
            fgets(place2, 25, stdin);
            printf("Where is the last place you went on vacation to? ");
            fgets(place3, 25, stdin);
            break;
        case 2:
            printf("What is your favorite city? ");
            fgets(place1, 25, stdin);
            printf("Where is the last place you went on vacation to? ");
            fgets(place2, 25, stdin);
            printf("What city are you from? ");
            fgets(place3, 25, stdin);
            break;
        case 3:
            printf("Where is the last place you went on vacation to? ");
            fgets(place1, 25, stdin);
            printf("What city are you from? ");
            fgets(place2, 25, stdin);
            printf("What is your favorite city? ");
            fgets(place3, 25, stdin);
            break;
    }
}

void collectJobs(void) {
    int index = generateRandomNumber(3);
    switch(index) {
        case 1:
            printf("What is your job? ");
            fgets(job1, 25, stdin);
            printf("What is your dream job? ");
            fgets(job2, 25, stdin);
            printf("What is one of your parent's job? ");
            fgets(job3, 25, stdin);
            break;
        case 2:
            printf("What is your dream job? ");
            fgets(job2, 25, stdin);
            printf("What is one of your parent's job? ");
            fgets(job3, 25, stdin);
            printf("What is your job? ");
            fgets(job1, 25, stdin);
            break;
        case 3:
            printf("What is one of your parent's job? ");
            fgets(job3, 25, stdin);
            printf("What is your job? ");
            fgets(job1, 25, stdin);
            printf("What is your dream job? ");
            fgets(job2, 25, stdin);
            break; 
    }
}

// END FUNCTION DEFINITIONS