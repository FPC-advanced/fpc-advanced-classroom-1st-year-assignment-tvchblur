/*
7. Write a C program to find sum of all natural numbers until _n_

***Function Declarations***

```c
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);
```
*/

#include <stdio.h>

int input_n(){
    printf("Enter a natural number.\n");
    int n;
    scanf("%d", n);
    return n;
}

int sum_n_nos(int n){
    int sum=0;
    int inc=0;
    for(inc=0;inc<=n;inc++){
        sum = sum + 1;
    }
    return sum;
}

void output(int n, int sum){
    printf("Sum of the first %d numbers is %d.\n", n, sum);
}

int main(void){
    int n, sum=0;
    n = input_n();
    sum = sum_n_nos(n);
    output(n, sum);
    return 0;
}