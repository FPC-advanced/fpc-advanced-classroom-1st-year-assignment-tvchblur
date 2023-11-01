/*12. Write a C program to find the sum of _n_ complex numbers
***Input***
 ```
Enter the number of arrays: 3
2 3
4 5
6 7
```
***Output***
```
2+3i + 4+5i + 6+7i is 12+15i

*/

#include <stdio.h>

struct _complex {
	float real,imaginary;
};

typedef struct _complex Complex;

int get_n(){
    printf("Enter the size of the array:\n");
    int n;
    scanf("%d", &n);
    return n;
}


void input_n_complex(int n, Complex c[n]){
    int index=0;
    for(index=0; index<n; index++){
        printf("Append the real and imaginary parts:\n");
        scanf("%f%f", &c[index].real, &c[index].imaginary);
    }

}

Complex add_n_complex(int n, Complex c[n]){
    int index=0;
    Complex sum;
    for(index=0;index<n;index++){
        sum.real += 
        
    }

}

void output(int n, Complex c[n], Complex result);

int main(void){
    int n;
    n = get_n();
    Complex c[n];
    input_n_complex(n, c);


}