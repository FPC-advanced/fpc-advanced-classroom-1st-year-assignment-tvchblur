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
    int i, result=1;
        for(i=2; i<=sqrt(n); i++){
            if(n%i==0){
                result = 0;
                break;
            }

            else if(n%i!=0){
                result=1;
            }
        }
        return result;

}

void output(int n, int result){
    if(n==1){
        printf("1 is neither prime nor composite.\n");
    }

    else if(result==0){
        printf("%d is a composite number.\n", n);
    }
    else if(result==1){
        printf("%d is a prime number.\n", n);
    }
}

int main(void){
    int n;
    int iscomp;
    n = input_number();
    iscomp= is_composite(n);
    output(n, iscomp);
    return 0;
}

