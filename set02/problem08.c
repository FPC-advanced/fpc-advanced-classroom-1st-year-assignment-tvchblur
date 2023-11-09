/*Write a program to find the triangle with smallest area in n given triangles.
typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n();
void input_n_triangles(int n, Triangle t[n]);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);
Input
2 3
4 6
Output
The smallest triangle out of triangles with base and height (2,3) , (4,6) is the triangle having base 2.00, height 3.00 and area 3.00*/

#include <stdio.h>

typedef struct _triangle{float base, altitude, area;} Triangle;

int input_n(){
    int n;
    printf("Enter the number of triangles:\n");
    scanf("%i", &n);
    return n;
}

void input_n_triangles(int n, Triangle t[n]){
    int index=0;
    for(index=0; index<n; index++){
        printf("Enter the base and altitude of the triangle:\n");
        scanf("%f%f", &f.base, &f.altitude)
    }

}

void find_n_areas(int n, Triangle t[n]){

}

Triangle find_smallest_triangle(int n, Triangle t[n]){

}

void output(int n, Triangle t[n], Triangle smallest){

}

int main(void){
    int n= input_n();
    Triangle t[n];
    input_n_triangles(n, t);

}