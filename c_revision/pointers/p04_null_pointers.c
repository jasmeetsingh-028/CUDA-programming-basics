// null pointers: makes the code more robust using the if statements
// using null pointers to make the code more robust

#include <stdio.h>
#include <stdlib.h>

int main(){

    int* ptr = NULL; //initialize a null pointer

    if (ptr == NULL){
        printf("Pointer is null and cannot be dereferenced\n");
    }

    // allocate memory to NULL pointer
    ptr = malloc(sizeof(int));

    //check is the pointer is NULL

    if (ptr == NULL){
        printf("Pointer is null and cannot be dereferenced\n");
    }

    // use pointer to store value
    *ptr = 15; //dereference it to store the value

    printf("POinter value after memory allocation: %d\n", *ptr);

    //clean up

    free(ptr);
    ptr = NULL; 

    printf("After free, ptr value: %p\n", (void*)ptr);

}