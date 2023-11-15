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
    int result=1,i=0;
    if(n==1){
        result=2;
    }
    else{
        
    }
    for(i=2; i<=sqrt(n); i++){
        if(n==1){
            break;
        }
        if(n%i==0){
            result=0;
            break;
        }
    }
    return result;
}

void output(int n, int result){
    if(result==2){
        printf("1 is neither prime not composite.\n");
    }

    if(result==0){
        printf("%i is composite.\n", n);
    }

    else if(result==1){
        printf("%i is prime.\n", n);
    }
}

int main(void){
    int n=input_number();
    int prime = is_prime(n);
    output(n, prime);
    return 0;
}