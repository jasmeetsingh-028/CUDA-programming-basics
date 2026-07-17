#include <stdio.h>

int main(){

    int var = 15;
    int* ptr1 = &var;
    int** ptr2 = &ptr1;
    int*** ptr3 = &ptr2;

    //all pointers are actually pointing to var

    printf("Address of var: %p\n", &var);
    printf("Address of ptr1: %p\n", &ptr1);
    printf("Address that ptr1 points to (should be same as address of var): %p\n", ptr1);
    printf("Value that ptr 1 points to (same as value of var) %d\n", *ptr1);

    printf("\nAddress of ptr2: %p\n", &ptr2);
    printf("Address that ptr2 points to (should be same as address of ptr1): %p\n", ptr2);
    printf("Value that ptr 2 points to (same as value of var): %d\n", **ptr2);

    printf("\nAddress of ptr3: %p\n", &ptr3);
    printf("Address that ptr3 points to (should be same as address of ptr2): %p\n", ptr3);
    printf("Value that ptr 3 points to (same as value of var): %d\n", ***ptr3);
    return 0;
}