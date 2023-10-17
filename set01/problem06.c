/*
6. Write a C program to compare three numbers using **pass by reference**

***Function Declarations***

```c
int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
```
*/

#include <stdio.h>

int input(int *a, int *b, int *c){
    printf("Enter the first number to be compared:\n");
    scanf("%d", a);
    printf("Enter the second number to be compared:\n");
    scanf("%d", b);
    printf("Enter the third number to be compared:\n");
    scanf("%d", c);
}

void compare(int a, int b, int c, int *largest){
    if(a>=b&&a>=c){
        *largest = a;
    }
    else if(b>=c){
        *largest = b;
    }

    else{
        *largest = c;
    }

}

void output(int a, int b, int c, int largest){
    printf("The largest among %d, %d and %d is %d.\n", a,b,c,largest);
}

int main(void){
    int a, b, c, largest;
    input(&a, &b, &c);
    compare(a, b, c, &largest);
    output(a, b, c, largest);
    return 0;
}