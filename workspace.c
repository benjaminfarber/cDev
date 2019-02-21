//advanced phonebook with addition of sorting alphabetically, searching for contacts, random friend selection, and clearing contacts functions
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct database //defining database structure
   {
    char firstname[20]; 
	char lastname[20];
    char number[15]; 
   } 
   phone;
   
void addcontact (phone[]); // function declarations
void deletecontact (phone[]);
void showall (phone[]);
void alpha (phone[]);
void lookup (phone[]);
void random (phone[]);
void deleteall (phone[]);
   
int y=0;
		   
int main(){
	int userChoice = 0;
	phone *database; 
	database = (phone*) malloc(sizeof(phone)*1); //allocates memory to database


	while(userChoice!=8){ //displays menu
	    printf("\nPhonebook Menu");
	    printf("\n1.Add Contact");
	    printf("\n2.Delete Contact");
	    printf("\n3.Show Phonebook");
	    printf("\n4.Alphabetically Sort");
		printf("\n5.Search for Contact");
		printf("\n6.Random Friend");
		printf("\n7.Clear All Contacts");
		printf("\n8.Exit");
		printf("\n\nInsert desired operation: ");
		scanf("%d", &userChoice);  

		switch(userChoice){
			case 1: //add contact
				database=(phone*)realloc(database,sizeof(phone)*(y+1));
				if (database == NULL){
					printf("Could not allocate memory.");
				}
				addcontact(database);
				break;
			case 2: //delete contact
				deletecontact(database);
				break;
			case 3: //shows entire contact list
				showall(database);
				break;
			case 4: //sorts contacts alphabetically
				alpha(database);
				break;
			case 5: // looks up a specific name to find the number
				lookup(database);
				break;
			case 6: //picks a random friends contact
				random(database);
				break;
			case 7: //deletes all contacts and frees memory
				deleteall(database);
			case 8:
				break;
				
		}
	}
}

void addcontact(phone database[]){
     printf("\nFirst Name: ");
     scanf("%s", database[y].firstname);
     printf("Last Name: ");
     scanf("%s", database[y].lastname);
     printf("Phone Number: "); 
     scanf("%s", database[y].number);
     printf("\nRecord added to phone book"); 
     y++; 
}

void deletecontact(phone database[]){
	int x = 0;
	int i = 0;
	char numberToDelete[10];
	
	printf("\nPhone Number to Delete: ");
	scanf("%s", numberToDelete);
	
	for (x = 0; x < y; x++){ //shifts entire array past deleted contact to overwrite data
		if (strcmp(numberToDelete, database[x].number) == 0) {
	      	for ( i = x; i < y - 1; i++ ){
			      strcpy(database[i].firstname, database[i+1].firstname); 
			      strcpy(database[i].lastname, database[i+1].lastname); 
			      strcpy(database[i].number, database[i+1].number); 
	        } 
	        
	        printf("Contact deleted\n");
	        --y; 
		}
	}
}

void showall(phone database[]){
	int x = 0;
	printf("\nYour Contacts: \n");
    for( x = 0; x < y; x++) { //goes through and prints out each contact in the system
	    printf("%s %s: %s\n", database[x].firstname, database[x].lastname, database[x].number);
	}
}

void alpha (phone database[]){
	int swapped=1;
	phone temp[10];
	int x=0;
	int enter;
	printf("\n1)Alphabetical First Name:\n");
	while (swapped==1){
		swapped=0;
		for(x=0; x<(y-1);x++){ //compares letters of each contact to determine alphabetical order
			if(strcmp(database[x].firstname, database[x+1].firstname)>0){
				temp[0]=database[x];
				database[x]=database[x+1];
				database[x+1]=temp[0];
				swapped=1;
				break;
			}
		}
	}
	showall (database);
}
void lookup (phone database[]){ //uses user input to search for matching first and last name to get contact info
	int x=0;
	int y=0;
	int found=0;
	char first[15];
	char last[15];
	printf("\nEnter First Name: ");
	scanf("%s",&first);
	printf("Enter Last Name: ");
	scanf("%s",&last);
	for (x=0; x<=y;x++){
		if(strcmp(database[x].firstname, first)==0 && strcmp(database[x].lastname,last)==0){
			printf("Contact Number: %s\n",database[x].number);
		 	found=1;
		 	x=y+1;
		}
	}
	if(found!=1){
		printf("Not Found\n");
	}
}
	
void random (phone database[]){ // uses rand() function to pick random entry in the array
	int d=0;
	srand(time(NULL));
	d=(rand()%y);
	printf("Random: %s %s %s", database[d].firstname, database[d].lastname, database[d].number);
}

void deleteall (phone database[]){ //frees memory of database element and deletes all contacts at once
	free(database);
	printf("Memory Cleared\n");
	y=0;
	database=(phone*)malloc(1*sizeof(phone));
}