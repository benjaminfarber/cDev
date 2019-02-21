#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createContact(int *);
void deleteContact(int *);
void displayContactList(int);

typedef struct contact {
    char firstName[20];
    char lastName[20];
    char phoneNumber[15];
} contact;

int main(void) {
    int numberOfContacts = 0;
    int *pnumberOfContacts = &numberOfContacts;
    int action = 0;
    do {
        printf("\n-----Contacts-----\n");
        printf("(1) Create contact\n");
        printf("(2) Delete contact\n");
        printf("(3) View contacts\n");
        printf("(4) Exit Contacts\n\n");
        printf("What would you like to do? ");
        scanf("%d", &action);
        system("clear");
        switch(action) {
            case 1:
                printf("\nCreate Contact\n");
                break;
            case 2;
                printf("\nDelete Contact\n");
                break;
            case 3;
                printf("\nYour Contacts\n");
                break;
            case 4;
                printf("Exiting Contacts . . .");
                break;
        }
    } while (action != 0);
    return 0;
}

void createContact(int *pnumberOfContacts) {
    *pnumberOfContacts++;
}

void deleteContact(int *pnumberOfContacts) {
    *pnumberOfContacts--;
}

void displayContactList(int numberOfContacts) {

}