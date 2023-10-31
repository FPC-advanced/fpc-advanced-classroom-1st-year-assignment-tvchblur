/*11. Write a C program to find the sum of 2 complex numbers

***Function Declarations***
```c
struct _complex {
	float real;
	float imaginary;
}
typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);
```

***Input***
```
2 3
4 5
```

***Output***
```
The sum of 2+3i and 4+5i is 6+8i*/

#include <stdio.h>

struct _complex{
    float real;
    float imaginary;
};
typedef struct _complex Complex;

Complex input_complex(){
    Complex a;
    printf("Enter the real and imaginary parts of the number:\n");
    scanf("%f%f", a.real, a.imaginary);
    return a;
}
Complex add_complex(Complex a, Complex b){
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}
void output(Complex a, Complex b, Complex sum){
    printf("The sum of %f+%fi and %f+%fi is ")

}

int main(void){
    Complex a, b, sum;
    a= input_complex();
    b= input_complex();
    sum = add_complex(a,b);
    output(a, b, sum);
    return 0;
}