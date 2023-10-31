/*12. Write a C program to find the sum of _n_ complex numbers

***Function Declarations***
```c
struct _complex {
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);
```

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

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);