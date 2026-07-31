#include <stdio.h>

// Pointer address and 

int main(){
    int var = 10;
    int* ptr = &var;

    printf("Address of pointer: %p\n", &ptr);
    printf("Address that the pointer stores: %p\n", ptr); 
    printf("Adress of the variable that the pointer points to: %p\n", &var);
    printf("Value of pointer: %d\n", *ptr); //dereferencing
    
    return 0;
}