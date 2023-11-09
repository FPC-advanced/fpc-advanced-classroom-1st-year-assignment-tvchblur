#include <stdio.h>

int main(void){
    char str[100] = "gjdnr;g ehoejfoiwe reofniewio reifwnofiw.";
    int i=0;
    int counts = 0;
    for(i=0; str[i]!='\0'; i++){
        if(str[i]==' '){
            counts++;
        }
    }
    printf("%i", counts+1);
}