/*
* The strstr() function takes two strings as arguments/
* The strstr() function looks for the first occurence of the second argument in the first argument.
* If the string in the second argument is found in the string in the first argument,
* the strstr() function returns a pointer to the string in the first argument.
*/

#include<stdio.h>
#include<string.h>

int main(void) {
    char *str1 = "Analyzing strings with the strstr() function.";
    char *str2 = "ing";
    char *str3 = "xyz";

    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    printf("str3 = %s\n\n", str3);

    if (strstr(str1, str2) != NULL) {
        printf("str2 was found in str1.\n");
    } else {
        printf("str2 was not found in str1.\n");
    }
    if (strstr(str1, str3) != NULL) {
        printf("str3 was found in str1.\n");
    } else {
        printf("str3 was not found in str1.\n");
    }
    return 0;
}