/*04.  Write a program to find Sum of composite number in an array of different numbers entered by the user.

***Function Declarations***
```c
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
```

***Input***
```
1 2 7 8 12
```

***Output***
```
20*/

#include <stdio.h>
#include <math.h>

int input_array_size(){
    int n;
    printf("Enter the size of the array:\n");
    return n;
}

void input_array(int n, int a[n]){
    int index=0;
    for(index=0;index<n;index++){
        printf("Append a number to the array:\n");
        scanf("%d", &a[index]);
    }
}

int sum_composite_numbers(int n, int a[n]){
    
}