#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct contact {
    char firstName[30];
    char lastName[30];
    char phoneNumber[30];
} contact;

void createContact(contact[], int *);
void deleteContact(contact[], int *);
void displayContactList(contact[], int *);
void getString(char *, int);
char* capitalize(char *);

int main(void) {
    int contactIndex = 1;

    contact *contactList = (contact*)calloc(sizeof(contactList), 1);

    int action = 0;

    do {
        printf("\n-----Contacts-----\n");
        printf("(1) Create contact\n");
        printf("(2) Delete contact\n");
        printf("(3) View contacts\n");
        printf("(4) Exit Contacts\n\n");
        printf(">> ");
        scanf("%d", &action);
        system("clear");
        switch(action) {
            case 1:
                printf("\nCreate Contact\n");
                contactIndex++;
                contactList=(contact*)realloc(contactList,sizeof(contact)*(contactIndex));
	            if (contactList == NULL){
		            printf("Could not allocate memory.");
	            }                
                createContact(contactList, &contactIndex);
                printf("\ncontactIndex = %d", contactIndex);
                break;
            case 2:
                printf("\nDelete Contact\n");
                contactIndex--;
                deleteContact(contactList, &contactIndex);
                printf("\ncontactIndex = %d", contactIndex);
                break;
            case 3:
                printf("\nYour Contacts\n");
                displayContactList(contactList, &contactIndex);
                printf("\ncontactIndex = %d", contactIndex);
                break;
            case 4:
                printf("Exiting Contacts . . .\n\n");
                break;
            default:
                printf("That input is not valid.");
                break;
        }
    } while (action != 4);
    return 0;
}

void getString(char *str, int size) {
    fgets(str,size,stdin);
    str[strlen(str)-1] = '\0';
}

char* capitalize(char *str) {
    str[0] = toupper(str[0]);
    return str;
}

void createContact(contact contactList[], int *contactIndex) {
    char *firstName = contactList[*contactIndex].firstName;
    char *lastName = contactList[*contactIndex].lastName;
    char *phoneNumber = contactList[*contactIndex].phoneNumber;    
    printf("\nFirst Name: ");
    getString(firstName, 20);
    capitalize(firstName);
    printf("Last Name: ");
    getString(lastName, 20);
    capitalize(lastName);
    printf("Phone Number: ");
    getString(phoneNumber, 15);
    printf("\n%s %s has been added to your contact list.", firstName, lastName);
}

void deleteContact(contact contactList[], int * contactIndex) {
}

void displayContactList(contact contactList[], int * contactIndex) {
}