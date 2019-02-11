#include<stdio.h>
#include<string.h>

int main() {
    char *myName = "Benjamin Edwards Farber";
    int nameLength = strlen(myName);
    printf("\"%s\" is %d characters long.\n", myName, nameLength);
    return 0;
}