/*Write a program to find GCD _(HCF)_ of two numbers.
***Function Declarations***
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
***Input***
12
16

***Output***
4*/

#include <stdio.h>

int input(){
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    return n;
}

int find_gcd(int a, int b){
    int temp;
    while(1){
        if(a>b){
            a = a-b;
        }
        else if(b>a){
            b = b-a;
        }
        if(a==b){
            return a;
            break;
        }
    }
}

void output(int a, int b, int gcd){
    printf("The GCD of %d and %d is %d\n", a, b, gcd);
}

int main(void){
    int a = input();
    int b = input();
    int gcd = find_gcd(a,b);
    output(a, b, gcd);
    return 0;
}