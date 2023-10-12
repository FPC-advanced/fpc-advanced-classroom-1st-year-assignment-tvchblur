/*
4. Write a C program to add two numbers using **pass by reference**

***Function Declarations***

```c
void input(int *a, int *b);
void add(int a, int b, int *sum);
void output(int a, int b, int sum);
```

*/

#include <stdio.h>

void input(int *a, int *b){
    printf("Enter the first number to be added:\n");
    scanf("%d", a);
    printf("Enter the second number to be added:\n");
    scanf("%d", b);
}

void add(int a, int b, int *sum){
    *sum = a + b;
}

void output(int a, int b, int sum){
    printf("The sum of %d and %d is %d.\n", a, b, sum);
}

int main(void){
    int a, b, sum;
    input(&a, &b);
    add(a, b, &sum);
    output(a, b, sum);
}