/*Write a program to find if a triangle is scalene.

> A triangle is scalene if all the three sides of the triangle are not equal to one another
***Input***
5
4
5
***Output***
The triangle with sides 5, 4 and 5 is not scalene*/
#include <stdio.h>

int input_side(){
    int a;
    printf("Enter a side of the triangle:\n");
    scanf("%d", &a);
    return a;
}

int check_scalene(int a, int b, int c){
    int result=0;
    if(a==b || a==c || b==c){
        result=0;
    }

    else if(a==b && a==c && b==c){
        result=1;
    }
    return result;
}

void output(int a, int b, int c, int isscalene){
    if(isscalene=0){
        printf("The triangle with sides %d, %d and %d is not scalene.",a,b,c);
    }

    else if(isscalene=1){
        printf("The triangle with sides %d, %d and %d is scalene.",a,b,c);
    }
}

int main(void){
    int a, b, c, isscalene;
    a = input_side();
    b= input_side();
    c = input_side();
    isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
}