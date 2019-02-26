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
char* capitalize(char *);

int main(void) {
    int numberOfContacts = 0;
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
                printf("\nCreate Contact\n\n");
                numberOfContacts++;
                contactList = (contact*)realloc(contactList, sizeof(contactList)*(numberOfContacts));
	            if (!contactList) {
		            printf("Could not allocate memory.");
	            }                
                createContact(contactList, &numberOfContacts);
                break;
            case 2:
                printf("\nDelete Contact\n\n");
                displayContactList(contactList, &numberOfContacts);
                deleteContact(contactList, &numberOfContacts);
                numberOfContacts--;
                break;
            case 3:
                printf("\nYour Contacts:\n\n");
                displayContactList(contactList, &numberOfContacts);
                break;
            case 4:
                printf("Exiting Contacts . . .\n\n");
                break;
            default:
                printf("Ivalid Input.");
                break;
        }
    } while (action != 4);
    return 0;
}

char* capitalize(char *str) {
    str[0] = toupper(str[0]);
    return str;
}

void createContact(contact contactList[], int *numberOfContacts) {
    char *firstName = contactList[*(numberOfContacts)].firstName;
    char *lastName = contactList[*(numberOfContacts)].lastName;
    char *phoneNumber = contactList[*(numberOfContacts)].phoneNumber; 
    printf("\nFirst Name: ");
    scanf("%s", firstName);
    capitalize(firstName);
    printf("Last Name: ");
    scanf("%s", lastName);
    capitalize(lastName);
    printf("Phone Number: ");
    scanf("%s", phoneNumber);
    printf("\n%s %s has been added to your contact list.\n", firstName, lastName);
}

void deleteContact(contact contactList[], int *numberOfContacts) {
    int counter;
    int contactNumberToDelete;
    if (*numberOfContacts == 0) {
        printf("No contacts to delete :(\n");
    } else {
        printf("Delete Contact # ");
        scanf("%d", &contactNumberToDelete);
        for (counter = contactNumberToDelete; counter <= *numberOfContacts; counter++) {
		    strcpy(contactList[counter].firstName, contactList[counter+1].firstName);
		    strcpy(contactList[counter].lastName, contactList[counter+1].lastName);
            strcpy(contactList[counter].phoneNumber, contactList[counter+1].phoneNumber);
	    }
    }
}

void displayContactList(contact contactList[], int *numberOfContacts) {
    int i;
    if (*numberOfContacts == 0) {
        printf("You haven't created any contacts yet.\n");
    } else {
        for (i = 1; i <= *numberOfContacts; i++) {
            printf("Contact #%d --------------\n", i);
            printf("First Name: %s\n", contactList[i].firstName);
            printf("Last Name: %s\n", contactList[i].lastName);
            printf("Phone Number: %s\n", contactList[i].phoneNumber);
            printf("-------------------------\n\n");
        }
    }
}