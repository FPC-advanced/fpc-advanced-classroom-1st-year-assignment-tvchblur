/*Write a program to check if the given number is prime
int input_number();
int is_prime(int n);
void output(int n, int result);
I:3
O:3 is a prime number*/

#include <stdio.h>
#include <math.h>

int input_number(){
    printf("Enter a number:\n");
    int n;
    scanf("%i", &n);
    return n;
}

int is_prime(int n){
    int temp,i=0;
    for(i=2; i<=sqrt(n); i++){
        if(n%i==0){
            temp=0;
        }
        else if(n%i!=0){
            temp=1;
        }
    }
    return temp;
}

void output(int n, int result){
    if(n==1){
        printf("1 is neither prime not composite");
    }
    
    if(result==0){
        printf("%i is composite.\n", n);
    }

    else{
        printf("%f is prime.\n", n);
    }
}

int main(void){
    int n=input_number();
    return 0;
    int prime = is_prime(n);
    output(n, prime);
    return 0;
}