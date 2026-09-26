#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>
#include <string.h>
#include <time.h> 
#define MAXSTR 9999 

//----------------LER VETOR------------------//

void lerVetor(char vetor[], int *qntd){

    printf("Digite uma palavra ou frase: ");
    fgets(vetor, MAXSTR, stdin);

    *qntd = strlen(vetor) - 1; //espaço do /n
}

//----------------CONTADOR DE CARACTERE------------------//

void contCaractere(char vetor[], int qntd){

    char carac;
    int cont = 0;  
    int i;  

    printf("Digite o caractere que voce deseja contar: "); 
    scanf(" %c", &carac); 

    for ( i = 0; i < qntd; i++){

        if (carac == vetor[i]){ 

            cont++; 
        }
    }
    
    printf("Quantidade encontrada do caractere '%c': %d", carac, cont);
}

//----------------PROGRAMA PRINCIPAL------------------//

int main(){ 
    
    char vetor[MAXSTR];
    int qntd; 

    lerVetor(vetor, &qntd); 
    contCaractere(vetor, qntd); 

    return 0; 
}