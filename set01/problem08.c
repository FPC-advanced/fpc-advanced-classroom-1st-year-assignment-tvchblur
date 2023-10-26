/*
8. Write a C program to find sum of _n_ different numbers entered by the user.

***Function Declarations***

```c
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);
```

***Input***
```
Input array size: 3
Input the array:
1 7 11
```

***Output***
```
1+7+11 is 19
```
*/

#include <stdio.h>

int input_array_size(){
    int n;
    printf("Input the array size:\n");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int a[n]){
    printf("Input the array:\n");
    int index=0;
    for(index=0; index<n; index++){
        scanf("%d", &a[index]);
    }
}

int sum_n_array(int n, int a[n]){
    int sum=0;
    int index=0;
    for(index=0;index<n;index++){
        sum = sum + a[index];
    }

    return sum;
}

void output(int n, int a[n],int sum){
    printf("The sum of the elements of the array is %d.", sum);

}

int main(void){
    int n;
    n = input_array_size();
    int a[n];
    input_array(n, a);
    int sum =0;
    sum = sum_n_array(n, a);
    output(n, a, sum);

}