// defining custom type

#include <stdio.h>

//type definiton 

typedef struct{
    float height;
    char grade;
} details;

// Type name: Custom

int main(){
    details x = {172.5, 'A'};
    printf("Size of custom type: %zu\n", sizeof(details));
    // access height and grade using the dot operator
    printf("Height: %.2f\n", x.height);
    printf("Grade: %c\n", x.grade);
    return 0;
}