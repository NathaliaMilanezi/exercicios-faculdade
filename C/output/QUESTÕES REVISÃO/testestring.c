#include <stdio.h>
#include <string.h>
#define MAXSTR 15

void limparBuffer(){ // função para limpar buffer. 

    int c; 
    while ((c = getchar()) != '\n' && c != EOF);  

}

int main(){

    char str1[MAXSTR]; 

    printf("Digite seu nome: "); 
    gets(str1); 
    printf("\n\tGETS: %s\n", str1);

    printf("Digite seu primeiro sobrenome: "); 
    fgets(str1, MAXSTR, stdin);
    limparBuffer();  
    //ele manda os elementos que ele não conseguiu ler para o segundo fgets
    printf("\n\tFGETS: %s\n", str1);
    //fflush(stdin); //não foi feito para limpar buffer de entrada, mas não deve ser usada. 


    printf("Digite seu segundo sobrenome: ");
    fgets(str1, MAXSTR, stdin); 
    limparBuffer();
    printf("\n\tFGETS: %s\n", str1);
    

    //scanf("%10[^\n]s", str1); 
    //limparBuffer();
    //printf("\n\tSCANF: %s\n", str1);
    // o scanf tem o mesmo problema do fgets, guarda os caracteres não lidos para o próximo scanf. 
}