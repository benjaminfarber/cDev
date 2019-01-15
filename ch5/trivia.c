#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Function Prototypes

int sportsQuestion();
int geographyQuestion();
void pause(int);

// Global Variables

int gResponse = 0;
int correctAnswers = 0;
int incorrectAnswers = 0;

int main() {
    do {
        system("clear");
        printf("\n\tTHE TRIVIA GAME\n\n");
        printf("1\tSports\n");
        printf("2\tGeography\n");
        printf("3\tQuit\n");
        printf("\n\nEnter your selection: ");
        scanf("%d", &gResponse);

        switch(gResponse) {
            case 1:
                if (sportsQuestion() == 4) {
                    printf("\nCorrect!\n");
                    correctAnswers++;
                } else {
                    printf("\nIncorrect\n");
                    incorrectAnswers++;
                }
                printf("\nCorrect: %d\nIncorrect: %d\n", correctAnswers, incorrectAnswers);
                pause(2);
                break;
            case 2:
                if (geographyQuestion() == 2) {
                    printf("\nCorrect!\n");
                    correctAnswers++;
                } else {
                    printf("\nIncorrect\n");
                    incorrectAnswers++;
                }
                printf("\nCorrect: %d\nIncorrect: %d\n", correctAnswers, incorrectAnswers);
                pause(2);
                break;
        } // end switch
    } while (gResponse != 3);
    printf("\nFinal Score:\nCorrect: %d\nIncorrect: %d\n", correctAnswers, incorrectAnswers);
    return 0;
} // end main funtion

// Function Definitions

int sportsQuestion() {
    int answer = 0;
    system("clear");
    printf("\tSports Question\n");
    printf("\nWhat university did NFL star Deion Sanders attend?");
    printf("\n\n1\tUniversity of Miami\n");
    printf("2\tCalifornia State University\n");
    printf("3\tIndiana University\n");
    printf("4\tFlorida State University\n");
    printf("\nEnter your selection: ");
    scanf("%d", &answer);
    return answer;
} // end sportsQuestion function

int geographyQuestion() {
    int answer = 0;
    system("clear");
    printf("\tGeography Question\n");
    printf("\nWhat is the state capital of Florida?");
    printf("\n\n1\tPensacola\n");
    printf("2\tTallahassee\n");
    printf("3\tJacksonville\n");
    printf("4\tMiami\n");
    printf("\nEnter your selection: ");
    scanf("%d", &answer);
    return answer;
} // end geographyQuestion function

void pause(int inNum) {
    int currentTime = 0;
    int elapsedTime = 0;
    currentTime = time(NULL);
    do {
        elapsedTime = time(NULL);
    } while ((elapsedTime - currentTime) < inNum);
} // end pause function