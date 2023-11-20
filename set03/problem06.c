/*6. Write a program to find the index of a substring of a string
void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);
I:helloworldhello
world
O:The index of 'world' in 'helloworldhello' is 5*/

void input_string(char *string, char *substring){
    printf("Enter a string:\n");
    scanf("%s", string);
    printf("Enter the substring:\n");
    scanf("%s", substring);
}
int sub_str_index(char *string, char *substring){
    int index;
    for(index=0; string[index])
}
void output(char *string, char *substring, int index){}

int main(void){
    char string[100], substring[100];
    input_string(string, substring);
    int index= sub_str_index(string, substring);
    output(string, substring, index);
    return 0;
}