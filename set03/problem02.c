/*Write a program to find whether the given 3 points form a triangle
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);
I:1 1
0 0
1 1
O:The points (1.0, 1.0), (0.0, 0.0) and (1.0, 1.0) do not form a triangle*/

#include <stdio.h>
#include <math.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3){
    printf("Enter the x and y coordinates of the first point:\n");
    scanf("%f%f", x1,y1);
    printf("Enter the x and y coordinates of the second point:\n");
    scanf("%f%f", x2,y2);
    printf("Enter the x and y coordinates of the third point:\n");
    scanf("%f%f", x3,y3);    
}
int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3){
    /*
    To verify if three points form a triangle, we use the Triangle Inequality Theorem.
    According to the TIT, the sum of two sides of a triangle must be greater than the third side.
    To find the side of a triangle given its x and y coordinates, we can use the distance equation where:
    l = sqrt(pow(x1-x2,2)+pow(y1-y2, 2)) 
    We can find l1,l2,l2 using this formula.
    Then we have to check if (l1+l2>l3 && l1+l3>l2 && l2+l3>l1)
    Initialize flag=0 (not triangle)
    If all three conditions are true, is_triangle= 1 (is triangle);
    */
    float l1,l2,l3;
    l1 = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    l2 = sqrt(pow(x2-x3,2)+pow(y1-y3,2));
    l2 = sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    int flag = 0;
    if(l1+l2>l3 && l1+l3>l2 && l2+l3>l1){
     flag=1;
    }
    return flag;
}
void output(float x1, float y1, float x2, float y2, float x3, float y3, int result){
    if(result==1){
        printf("The points (%.1f, %.1f), (%.1f, %.1f) and (%.1f, %.1f) form a triangle.\n", x1, y1, x2, y2, x3, y3);

    }
    else{
        printf("The points (%.1f, %.1f), (%.1f, %.1f) and (%.1f, %.1f) do not form a triangle.\n", x1, y1, x2, y2, x3, y3);
    }
}

int main(void){
    float x1, y1, x2, y2, x3, y3;
    input_triangle(&x1, &y1, &x2, &y2, &x3, &y3);
    int result = is_triangle(x1, y1, x2, y2, x3, y3);
    output(x1, y1, x2, y2, x3, y3, result);
    return 0;    
}


