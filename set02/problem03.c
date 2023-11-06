/*03.  Write a program find whether a number is a composite number

> A Composite number has more than 2 factors.

***Function Declarations***
```c
int input_number();
int is_composite(int n);
void output(int n, int result);
```

***Input***
```
8
```

***Output***
```
8 is a composite number.*/

#include <stdio.h>
#include <math.h>

int input_number(){
    printf("Enter a number:\n");
    int n;
    scanf("%d", &n);
    return n;
}

int is_composite(int n){
    int i=0;
    int flag=0;
        for(i=0; i<=sqrt(n); i++){
            
        }
            if(n%i==0){
                flag = 0;
            }

            else if(n%i!=0){
                flag=1;
            }
            return flag;
}

void output(int n, int result){
    if(result==0){
        printf("%d is a composite number.\n", n);
    }
    else if(result==1){
        printf("%d is a prime number.\n", n);
    }
}

int main(void){
    int n, iscomp;
    n = input_number();
    iscomp= is_composite(n);
    output(n, iscomp);
}

