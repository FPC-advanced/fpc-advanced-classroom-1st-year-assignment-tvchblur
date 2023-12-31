/*Write a program to find the distance between 2 points
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);
I:1 1
2 2
O:The distance between point (1.0000000, 1.0000000) and (2.0000000, 2.0000000) is 1.4142*/
#include <stdio.h>
#include <math.h>

void input(float *x1, float *y1, float *x2, float *y2){
    printf("Enter the x and y values of the first point:\n");
    scanf("%f%f", x1, y1);
    printf("Enter the x and y values of the second point:\n");
    scanf("%f%f", x2, y2);
}

float find_distance(float x1, float y1, float x2, float y2){
    float distance = sqrt((pow(x1-x2,2)) + (pow(y1-y2,2)));
    return distance;
}

void output(float x1, float y1, float x2, float y2, float distance){
    printf("The distance between point (%f, %f) and (%f, %f) is %f\n", x1,y1,x2,y2,distance);
}

int main(void){
    float x1,x2,y1,y2,distance;
    input(&x1,&y1,&x2,&y2);
    distance = find_distance(x1,y1,x2,y2);
    output(x1,y1,x2,y2,distance);
    return 0;
}