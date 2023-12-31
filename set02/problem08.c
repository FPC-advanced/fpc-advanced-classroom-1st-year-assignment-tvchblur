/*Write a program to find the triangle with smallest area in n given triangles.*/

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
        scanf("%f%f", &t[index].base, &t[index].altitude);
    }
}

void find_n_areas(int n, Triangle t[n]){
    int index=0;
    for(index=0;index<n;index++){
        t[index].area = 0.5*(t[index].base * t[index].altitude);
    }
}

Triangle find_smallest_triangle(int n, Triangle t[n]){
    int i=0;
    int temp;
    for(i=0;i<n-1;i++){
        if(t[i].area>t[i+1].area){
            temp=t[i].area;
            t[i].area = t[i+1].area;
            t[i+1].area=temp;
        }
    }
    return t[0];
}

void output(int n, Triangle t[n], Triangle smallest){
    printf("The triangle with the smallest area is the triangle having base %f, height %f and area %f\n", smallest.base, smallest.altitude, smallest.area);
}

int main(void){
    int n= input_n();
    Triangle t[n];
    input_n_triangles(n, t);
    find_n_areas(n,t);
    Triangle smallest = find_smallest_triangle(n,t);
    output(n, t,smallest);
    return 0;
    }