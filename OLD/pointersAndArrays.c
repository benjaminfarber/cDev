#include <stdio.h>

int main(void) {
    int array[5] = {25,51,312,1,678};
    int *ptrA = array;

    printf("\narray (using &array) address is \t\t\t\t\t%p", &array);
    printf("\narray (using pointers) address is \t\t\t\t\t%p\n", ptrA);

    printf("\nthe first element of the array (using indexing) is \t\t\t%d", array[0]);
    printf("\nthe first element of the array (using pointers) is \t\t\t%d\n", *ptrA);

    printf("\nthe address of the first element of the array (using indexing) is \t%p", &array[0]);
    printf("\nthe address of the first element of the array (using pointers) is \t%p\n", ptrA);

    printf("\nthe second element of the array (using indexing) is \t\t\t%d", array[1]);
    printf("\nthe second element of the array (using pointers) is \t\t\t%d\n", *(ptrA+1));

    printf("\nthe address of the second element of the array (using indexing) is \t%p", &array[1]);
    printf("\nthe address of the second element of the array (using pointers) is \t%p\n", ptrA+1);

    printf("\nthe third element of the array (using indexing) is \t\t\t%d", array[2]);
    printf("\nthe third element of the array (using pointers) is \t\t\t%d\n", *(ptrA+2));
    
    printf("\nthe address of the third element of the array (using indexing) is \t%p", &array[2]);
    printf("\nthe address of the third element of the array (using pointers) is \t%p\n\n", ptrA+2);

    return 0;
}