/*04.  Write a program to find Sum of composite number in an array of different numbers entered by the user.
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
***Input***
1 2 7 8 12
***Output***
20*/

#include <stdio.h>
#include <math.h>

int input_array_size(){
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
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
    int sum=0;
    int index, counter, result;
    for(index=0;index<n;index++){
        for(counter=2; counter<=sqrt(a[index]);counter++){
            if(a[index]%counter==0){
                sum += a[index];
            }
        }
    }
    return sum;
}

void output(int sum){
    printf("The sum of all composite numbers in the array is:%d\n", sum);
}

int main(void){
    int n = input_array_size();
    int a[n];
    input_array(n, a);
    int sum = sum_composite_numbers(n, a);
    output(sum);
    return 0;
}