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
    scanf("%c", string1);
    printf("Enter the second string:\n");
    scanf("%c", string2);
}

int stringcompare(char *string1, char *string2){

}

void output(char *string1, char *string2, int result){

}

int main(void){
    char string1[100], string2[100];

}