#include<stdio.h>
#include<string.h>

int main() {
    char str1[11];
    char *str2 = "C Language";
    strcpy(str1, str2); // strcpy(destination, source)
    printf("str1 now contains str2.\nstr1: %s\nstr2: %s.\n", str1, str2);
    return 0;
}