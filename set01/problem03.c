/*
3. Write a C program to add two numbers using **pass by value**

***Function declarations***

```c
int input();
int add(int a, int b);
void output(int a, int b, int sum);
*/
#include <stdio.h>

int input(){
    int n;
    printf("Enter a number to be added:\n");
    scanf("%d", &n);
    return n;
}

int add(int a, int b){
    int sum;
    sum = a+b;
    return sum;
}

void output(int a, int b, int sum){
    printf("The sum of %d and %d is %d.\n", a, b, sum);
}

int main(void){
    int a, b, sum;
    a = input();
    b = input();
    sum = add(a, b);
    output(a, b, sum);
    return 0;
}