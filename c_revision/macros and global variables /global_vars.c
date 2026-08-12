#include <stdio.h>


#define PI 3.14159
#define AREA(r) (PI * r * r)  // macro to calculate area of circle

#ifndef radius
#define radius 12
#endif


#if radius > 10
#undef radius
#define radius 10
#elif radius < 5
#undef radius
#define radius 5
#else
#undef radius
#define radius 7
#endif

// now radius is 10 becayse of the preprocessor directives above

int main(){
    printf("Radiud og the circle: %d\n", radius);
    printf("Area of circle: %.2f\n", AREA(radius)); // radius is 10 so the area is 314.16
}


