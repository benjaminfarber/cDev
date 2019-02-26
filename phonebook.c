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
    int contactIndex = 0;
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
                contactIndex++;
                contactList=(contact*)realloc(contactList,sizeof(contact)*(contactIndex));
	            if (contactList == NULL){
		            printf("Could not allocate memory.");
	            }                
                createContact(contactList, &contactIndex);
                break;
            case 2:
                printf("\nDelete Contact\n\n");
                displayContactList(contactList, &contactIndex);
                deleteContact(contactList, &contactIndex);
                contactIndex--;
                break;
            case 3:
                printf("\nYour Contacts:\n\n");
                displayContactList(contactList, &contactIndex);
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

char* capitalize(char *str) {
    str[0] = toupper(str[0]);
    return str;
}

void createContact(contact contactList[], int *contactIndex) {
    char *firstName = contactList[*contactIndex].firstName;
    char *lastName = contactList[*contactIndex].lastName;
    char *phoneNumber = contactList[*contactIndex].phoneNumber;    
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

void deleteContact(contact contactList[], int * contactIndex) {
    int counter;
    int contactNumberToDelete;
    printf("Delete Contact # ");
    scanf("%d", &contactNumberToDelete);
    for (counter = contactNumberToDelete; counter <= *contactIndex; counter++) {
		strcpy(contactList[contactNumberToDelete].firstName, contactList[contactNumberToDelete+1].firstName);
		strcpy(contactList[contactNumberToDelete].lastName, contactList[contactNumberToDelete+1].lastName);
        strcpy(contactList[contactNumberToDelete].phoneNumber, contactList[contactNumberToDelete+1].phoneNumber);
	}
    printf("%s %s has been deleted from your contacts.",contactList[contactNumberToDelete-1].firstName, contactList[contactNumberToDelete-1].lastName);
}

void displayContactList(contact contactList[], int * contactIndex) {
    int i;
    for (i = 1; i <= *contactIndex; i++) {
        printf("Contact #%d --------------\n", i);
        printf("First Name: %s\n", contactList[i].firstName);
        printf("Last Name: %s\n", contactList[i].lastName);
        printf("Phone Number: %s\n", contactList[i].phoneNumber);
        printf("-------------------------\n\n");
    }
}