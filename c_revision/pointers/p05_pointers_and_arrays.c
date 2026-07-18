// C arrays and pointers

#include <stdio.h>

int main(){
    int arr[] = {11, 12, 13, 14, 15};

    //array name is the pointer to the first element in the array
    printf("address of the first value of the array: %p\n", &arr[0]);
    printf("array name pointer address: %p\n", arr); // same as adress of 1st element of the array
    printf("array name pointer value %d\n", *arr); //dereference it to get the value

    // loop over the entire array with the arr pointer

    for (int i = 0; i<5; i++){
        printf("array value af idx %d is: %d\n", i, *(arr + i));
    }

    int* ptr = arr;

    // memory address changes everytime we iterate through the loop

    for (int i = 0; i<5; i++){
        printf("Pointer value: %d\n", *ptr);
        printf("Pointer address: %p\n", ptr);
        ptr++; // adds 4 bytes as the type of pointer is int 
    }

    // Pointer address: 0x7fffef7a8d80 
    // ptr++; increment by 4 bytes
    // Pointer address: 0x7fffef7a8d80 + 4 = 0x7fffef7a8d84

    return 0;
}