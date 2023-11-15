/*Write a program to find nth number in fibonacci sequence.

> Fibonacci Sequence is of the form: `0, 1, 1, 2, 3, 5, 8, 13, ...`
int find_fibo(int n);
void output(int n, int fibo);
I:5
O:fibo(5) = 5*/

#include <stdio.h>

int find_fibo(int n){
    int a=0, b=1;
    int i=0;
    for(i=0; i<=n; i++){
        int t=a;
        a = a+b;
        b=t;
    }
    return b;    
}
void output(int n, int fibo){
    printf("%i", fibo);
}
int main(void){
    printf("Enter a number:\n");
    int n = scanf("%i", &n);
    
    

}
