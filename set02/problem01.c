/*# Set 2

01.  Write a program to find the area of a triangle.

***Function Declarations***
```c
void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);
```

***Input***
```
1
2
***Output***
The area of the traingle with base 1.000000 and height 2.000000 is 1.000000*/

#include <stdio.h>

void input(float *base, float *height){
    printf("Enter the base and height of the triangle:\n");
    scanf("%f%f", base, height);
}

void find_area(float base, float height, float *area){
    *area = base * height;
}

void output(float base, float height, float area){
    printf("The area of tthe triangle with base %f and height %f is %f.\n", base, height, area);
}

int main(void){
    float base, height, area;
    base = 
}