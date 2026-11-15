//invertendo uma string

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Exemplo 1
int main(){

    char str[20] = "Linguagem C";
    int i;

    for(i = strlen(str)-1; i>=0; i--){
        printf("%c\n", str[i]);
    }

    printf("\n");

    return 0;
}