/*typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Traingle *t);
void output(Triangle t);
i:2
3
o:The area of triangle wwith base = 2.000000 and altitude = 3.000000 is 3.000000*/
 

#include <stdio.h>

typedef struct _triangle{
    float base, altitude, area;
} Triangle;

Triangle input_triangle(){
    Triangle t;
    printf("Enter the base and altitude of the triangle:\n");
    scanf("%f%f", &t.base, &t.altitude);
    return t;
}
void find_area(Triangle *t){
    t->area = t->base * t->altitude;
}
void output(Triangle t){
    printf("")
}

int main(void){

}


