#include <stdio.h>

int main(){

    int arr1[4] = {1,2,3,4};
    int arr2[4] = {5,6,7,8};

    int* ptr1 = arr1; // pointer pointing to to the first array
    int* ptr2 = arr2; // pointer pointing to the second array

    int* matrix[] = {ptr1, ptr2}; //array of pointers not a pointer itself

    // matrix[0] and matrix[1] are pointers

    int matrixLength = sizeof(matrix) / sizeof(matrix[0]);

    printf("Number of elements in matrix: %d\n", matrixLength);

    for(int i=0; i<matrixLength; i++){
        for(int j=0; j<4; j++){
            // printf("element at idx %d, %d is: %d\n", i, j, matrix[i][j]); but this works the same
            // printf("element at idx %d, %d is: %d\n", i, j, *(matrix[i] + j));
            // printf("element at idx %d, %d is: %d\n", i, j, *matrix[i]++)

            printf("element at idx %d, %d is: %d\n", i, j, *matrix[i]++);
 
            // matrix[i][j] = *( (matrix[i]) + j ) this is how c internally defines it
            // matrix[i] is a pointer to the array
        }
    }

}