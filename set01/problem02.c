//2. Write a C program to add two numbers.
#include <stdio.h>

int main(void){
    int a, b;
    printf("Enter two numbers to be added:\n");
    scanf("%d\n%d", &a, &b);
    int sum=a+b;
    printf("The sum of %d and %d is %d.\n", a, b, sum);
    return 0;
}

