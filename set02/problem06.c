/*Write a program to reverse a string.
***Function Declarations***
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
***Input***
hello
***Output***
olleh*/

void input_string(char *str){
    printf("Enter a string to be reversed:\n");
    scanf("%s", str);
}

void str_reverse(char *str, char *rev_str){
    int i=0;
    for(i=0; str[i]!='\0';i++){
        rev_str[i] = str[-i]; // if logical error, change condition in line 18 to for(i=0; str[-i]!='\0';i++)
    }
}

void output(char *str, char *rev_str){

}

int main(void){
    char str[100], rev_str[100];
    input_string(str);

}