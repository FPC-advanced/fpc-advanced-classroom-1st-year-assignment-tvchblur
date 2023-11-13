/*Write a program to find whether the given 3 points form a triangle
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);
I:1 1
0 0
1 1
O:The points (1.0, 1.0), (0.0, 0.0) and (1.0, 1.0) do not form a triangle*/

#include <stdio.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3){
    printf("Enter the x and y coordinates of the first point:\n");
    scanf("%f%f", x1,y1);
    printf("Enter the x and y coordinates of the second point:\n");
    scanf("%f%f", x2,y2);
    printf("Enter the x and y coordinates of the third point:\n");
    scanf("%f%f", x3,y3);    
}
int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3){
    float l1,l2,l3;

}
void output(float x1, float y1, float x2, float y2, float x3, float y3, int result){
    printf("The points (%f,%f), (%f,%f) and (%f%f) form a triangle.\n", x1, y1, x2, y2, x3, y3);
    printf("The points (%f,%f), (%f,%f) and (%f%f) do not form a triangle.\n", x1, y1, x2, y2, x3, y3);
}

int main(void){
    float x1, y1, x2, y2, x3, y3;
    input_triangle(&x1, &y1, &x2, &y2, &x3, &y3);
    int result = is_triangle(x1, y1, x2, y2, x3, y3);
    output(x1, y1, x2, y2, x3, y3, result);
    return 0;    
}


