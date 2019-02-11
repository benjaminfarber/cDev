#include <stdio.h>
#include <string.h>

int main(void) {
    char *str1 = "A";
    char *str2 = "A";
    char *str3 = "a";

    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    printf("str3 = %s\n", str3);
    
    printf("strcmp(str1, str2) = %d\n", strcmp(str1, str2));
    printf("strcmp(str1, str3) = %d\n", strcmp(str1, str3));
    printf("strcmp(str3, str1) = %d\n", strcmp(str3, str1));

    return 0;
}