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
int getString(char *, int);
void getNames(void);
void getFoods(void);
void getAdjectives(void);
void getPlaces(void);
void getJobs(void);

// END FUNCTION PROTOTYPES

// BEGIN MAIN FUNCTION

int main() {

    printf("\nWelcome to the story telling program!\n\n");

    char name1[25] = {'\0'};
    char name2[25] = {'\0'};
    char name3[25] = {'\0'};
    getNames();

    char food1[25] = {'\0'};
    char food2[25] = {'\0'};
    char food3[25] = {'\0'};
    getFoods();
    
    char adjective1[25] = {'\0'};
    char adjective2[25] = {'\0'};
    char adjective3[25] = {'\0'};
    getAdjectives();

    char place1[25] = {'\0'};
    char place2[25] = {'\0'};
    char place3[25] = {'\0'};
    getPlaces();
    
    char job1[25] = {'\0'};
    char job2[25] = {'\0'};
    char job3[25] = {'\0'};
    getJobs();

    do {
        int choice = 0;
        printf("[1]\tNEW STORY\n");
        printf("[2]\tALTERNATE STORY\n");
        printf("[3]\tQUIT\n");
        scanf("%d", choice);
        switch(choice) {
            case 1:
                printf("~NEW STORY~\n");
                break;
            case 2:
                printf("~ALTERNATE STORY~\n");
                break;
            case 3:
                break;
        }
    } while (switch != 3);
    return 0;
}

// END MAIN FUNCTION

// BEGIN FUNCTION DEFINITIONS

int generateRandomNumber(int max) {
    srand(time(NULL));
    return rand() % max;
}

int getString(char *str, int size) {
    fgets(str,size,stdin);
    str[strlen(str)-1] = '\0'; 
} // change '\n' character to '\0' from fgets()

void getNames(void) {

}

void getFoods(void) {

}

void getAdjectives(void) {

}

void getPlaces(void) {

}

void getJobs(void) {

}

// END FUNCTION DEFINITIONS