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

}

int main(void){
    int n=input_number();
    return 0;
    int is_prime = is_prime(n);
    output(n,is_prime);
    return 0;
}