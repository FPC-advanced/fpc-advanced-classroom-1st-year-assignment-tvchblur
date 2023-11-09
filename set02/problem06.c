#include <stdio.h>

void input_string(char *str){
    printf("Enter a string to be reversed:\n");
    scanf("%s", str);
}

void str_reverse(char *str, char *rev_str){
    int len=0, i=0, j=0;
    while(str[len]!='\0'){
        len++;
    }

    for(i=0; i<len;i++){
        rev_str[i] = str[len-1-i];
    }
    rev_str[len]='\0';
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