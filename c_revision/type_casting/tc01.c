#include <stdio.h>

//static casting: converting one data type to another data type at compile time

int main() {

    float f = 74.337;
    printf("Value of f: %.3f\n Size of f: %zu bytes\n", f, sizeof(f));
    int i = (int)f;
    printf("Value of i: %d\n Size of i: %zu bytes\n", i, sizeof(i));
    // type cast to char
    char c = (char)f;
    printf("Value of c: %c\n Size of c: %zu bytes\n", c, sizeof(c));
    // type cast to double
}