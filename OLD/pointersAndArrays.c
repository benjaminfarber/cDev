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

    int A[] = {2,3,4,8,1};
    int i;
    printf("A[] = { ");
    for (i=0; i<5; i++) {
        printf("%d ", A[i]);
    }
    printf("}\n\n");
    for (i=0; i<5; i++) {
        printf("i        \t= %d\n", i);
        printf("A + i    \t= %p\n", A+i);
        printf("&A[i]    \t= %p\n", &A[i]);
        printf("A[i]     \t= %d\n", A[i]);
        printf("*(A + i) \t= %d\n\n", *(A+i));
    }
    
    return 0;
}