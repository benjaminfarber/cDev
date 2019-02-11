#include<stdio.h>
#include<string.h>

int main(void) {
    char *firstName = "Benjamin";
    char *middleName = "Edwards";
    char *lastName = "Farber";
    char *space = " ";

    char fullName[50] = {'\0'};

    strcpy(fullName, firstName);
    strcat(fullName, space);
    strcat(fullName, middleName);
    strcat(fullName, space);
    strcat(fullName, lastName);

    printf("Hello, my full name is %s.\n", fullName);
    return 0;
}