#include <stdio.h>

void input(char *str[100]){
    printf("Enter the string:\n");
    scanf("%s", str);
}


int main(void){
    char str[100];
    input(str);
    int i=0, counts = 0;
    for(i=0; str[i]!='\0'; i++){
        if(str[i]==' '){
            counts++;
        }
    }
    printf("%i", counts+1);
    return 0;
}