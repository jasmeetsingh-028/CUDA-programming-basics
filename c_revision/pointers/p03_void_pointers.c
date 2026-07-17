// void pointers

#include <stdio.h>

int main(){

    int intVar = 15;
    float floatVar = 16.0;
    void* ptr; //points of type void (nothing)

    ptr = &intVar;

    printf("Void pointers value when it points to int variable: %d\n", *(int*)ptr); // cast the pointer to the type of data it points to and dereference to get its value

    ptr = &floatVar;

    printf("Void pointers value when it points to int variable: %f\n", *(float*)ptr); // cast the pointer to the type of data it points to and dereference to get its value

    return 0;

}