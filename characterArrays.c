#include<stdio.h>
#include<string.h>

int main() {
    char c[20];
    c[0] = 'J';
    c[1] = 'O';
    c[2] = 'H';
    c[3] = 'N';
    c[4] = '\0';
    int len = strlen(c);
    printf("%s is %d characters long.", c, len);
    return 0;
}