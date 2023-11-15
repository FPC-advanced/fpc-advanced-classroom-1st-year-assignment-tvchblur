/*Write a program to find all the prime numbers between 2 to n Eratosthenes Sieve method.
int input_array_size();
void init_array(int n, int a[n];
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);
I:35
O:2, 3, 7, 11, 13, 19, 23, 29, 31*/

/*Create a list of consecutive integers from 2 through n: (2, 3, 4, ..., n).
Initially, let p equal 2, the smallest prime number.
Enumerate the multiples of p by counting in increments of p from 2p to n, and mark them in the list (these will be 2p, 3p, 4p, ...; the p itself should not be marked).
Find the smallest number in the list greater than p that is not marked. If there was no such number, stop. Otherwise, let p now equal this new number (which is the next prime), and repeat from step 3.
When the algorithm terminates, the numbers remaining not marked in the list are all the primes below n.*/

#include <stdio.h>

int input_array_size(){
    printf("Enter the sieve limit:\n");
    int n;
    scanf("%i", &n);
    return n;
}
void init_array(int n, int a[n]){
    for(int i=0; i<n; i++){
        a[i] = i+1;
    }
}
void eratosthenes_sieve(int n, int a[n]){
    int p=2;
    int i=0;
    for(p=2; p<=n; p++){
        for(i=0;i<n;i++){
            if(a[i]==p){
                break;
            }
            else if(a[i]%p==0){
                a[i]='\0';
            }
        }
    }
}
void output(int n, int a[n]){
    printf("The primes until %i using the Eratosthenes Sieve is:%d\n", n,a);
}
int main(void){
    int n = input_array_size();
    int a[n];
    init_array(n, a);
    eratosthenes_sieve(n,a);
    output(n,a);
    return 0;
}

