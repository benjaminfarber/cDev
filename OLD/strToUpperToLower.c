#include<stdio.h>
#include<string.h>
#include<ctype.h>

void convertL(char *);
void convertU(char *);

int main() {
    char name1[] = "Ben";
    char name2[] = "Farber";
    
    convertL(name1);
    convertU(name2);
    return 0;
}

void convertL(char *str) {
    int x;
    for (x = 0; x <= strlen(str); x++) {
        str[x] = tolower(str[x]);
    }
    printf("First name converted to lower case is %s.\n", str);
}

void convertU(char *str) {
    int x;
    for (x = 0; x <= strlen(str); x++) {
        str[x] = toupper(str[x]);
    }
    printf("Last name converted to upper case is %s.\n", str);
}