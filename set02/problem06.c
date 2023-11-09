/*Write a program to reverse a string.
***Function Declarations***
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
***Input***
hello
***Output***
olleh olleh oleeehh oleh oleh ooooohh*/
#include <stdio.h>

void input_string(char *str){
    printf("Enter a string to be reversed:\n");
    scanf("%s", str);
}

void str_reverse(char *str[], char *rev_str[]){
    int i=0;
    for(i=0; str[i]!='\0';i++){
        rev_str[i] = str[-i];
    }
}

void output(char *str, char *rev_str){
    printf("The reversed string is: %s\n", rev_str);
}

int main(void){
    char str[100], rev_str[100];
    input_string(str);
    str_reverse(str, rev_str);
    output(str, rev_str);
    return 0;
}