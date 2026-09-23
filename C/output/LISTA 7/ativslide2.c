#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>
#include <string.h>
#include <time.h> 
#define MAXSTR 9999 

//----------------LER VETOR------------------//

void lerVetor(char vetor[], int *qntd){

    printf("Digite uma data (dd/mm/aaaa): ");
    fgets(vetor, MAXSTR, stdin);

    *qntd = strlen(vetor) - 1; //espaço do /n

}

//----------------VER SE É IGUAL------------------//

void transformar(char vetor[], int qntd){

    char dia[MAXSTR]; 
    char mes[MAXSTR]; 
    char ano[MAXSTR]; 
    
    int i; 
    char p; 

    for ( i = 0; vetor[i] != '/'; i++)
    {
        p = i; 
    }
    
    printf("A primeira %s foi encontrada na posição %d", p, i);

}

//----------------PROGRAMA PRINCIPAL------------------//

int main(){ 
    
    char vetor[MAXSTR];
    int qntd; 

    lerVetor(vetor, &qntd); 
    transformar(vetor, qntd); 


    return 0; 
}
