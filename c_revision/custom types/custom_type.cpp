// defining custom type in cpp

// #include <stdio.h>
#include <iostream>
using namespace std;

//type definiton 

typedef struct{
    float height;
    char grade;
} details;

// Type name: Custom

int main(){
    details x = {172.5, 'A'};
    cout<<"Size of custom type: "<<sizeof(details)<<endl;
    // access height and grade using the dot operator
    cout<<"Height: "<<x.height<<endl;
    cout<<"Grade: "<<x.grade<<endl;
    return 0;
}

// to run cpp code use g++ instead of gcc
// comand: g++ custom_type.cpp -o custom_type
// to run the executable: ./custom_type