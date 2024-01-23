/*
9. Write a C program to find the [square root](https://en.wikipedia.org/wiki/Methods_of_computing_square_roots#Babylonian_method) of a number.
float input();
float square_root(float n);
void output(float n, float sqrroot);
i:Enter number: 49
o:Square root of 49.0 is 7.0
*/

#include <stdio.h>

float input(){
    printf("Enter a number:\n");
    float n;
    scanf("%f", &n);
    return n;
}

float square_root(float n){
    float guess=1.0, preguess;
    if(n<0){
        return -1.0;
    }
    while(preguess!=guess){
        preguess=guess;
        guess = 0.5 * (guess + n/guess);
    }
    return guess;
}

void output(float n, float sqrroot){
    printf("The square root of %f is %f", n, sqrroot);
}

int main(void){
    float n;
    n = input();
    float sqrroot = square_root(n);
    output(n, sqrroot);
    return 0;
}