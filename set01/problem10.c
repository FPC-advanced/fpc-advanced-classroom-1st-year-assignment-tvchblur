/*10. Write a C program to compare two strings, character by character.

> For example, `Hello` should be equal to `Hello`, but not equal to `hello`.

> `Hello` will be lesser than `Hellw` (alphabetical order).

***Function Declarations***

```c
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
```

***Input***
```
Enter the first string: hello
Enter the second string: world*/


#include <stdio.h>

void input_two_strings(char *string1, char *string2){
    printf("Enter the first string:\n");
    scanf("%s", string1);
    printf("Enter the second string:\n");
    scanf("%s", string2);
}

int stringcompare(char *string1, char *string2){
    int i=0;
    int result=0;
    for(i=0; string1[i]==string2[i] && string1[i] != '\0' && string2[i] != '\0'; i++){
        if(string1[i]>string2[i]){
            result=1;
        }
        else{
            if(string1[i]<string2[i]){
                result=2;
            }
        }
        return result;
    }

}

void output(char *string1, char *string2, int result){
    if(result==1){
        printf("The greater string is: %s", string1);
    }

    else if(result==2){
            printf("The greater string is: %s", string2);
        }
    

}

int main(void){
    int result=0;
    char string1[100], string2[100];
    input_two_strings(&string1, &string2);
    result = stringcompare(&string1, &string2);
    output(&string1, &string2, result);
}