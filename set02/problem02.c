/*Write a program to find if a triangle is scalene.

> A triangle is scalene if all the three sides of the triangle are not equal to one another
***Input***
5
4
5
***Output***
The triangle with sides 5, 4 and 5 is not scalene*/

int input_side(){
    int a;
    printf("Enter a side of the triangle:\n");
    scanf("%d", &a);
    return a;
}

int check_scalene(int a, int b, int c){
    int result;
    if(a==b && a==c){
        printf("The triangle with sides %d, %d and %d is not scalene.")
    }

    if(a==b)
}

void output(int a, int b, int c, int isscalene){

}

int main(void){
    int a, b, c, insscalene;
    a = input_side();
    b= input_side();
    c = input_side();

}