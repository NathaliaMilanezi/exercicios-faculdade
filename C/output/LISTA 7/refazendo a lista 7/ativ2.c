#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <direct.h>
#define MAXSTR 100

//Ler vetor

void lerVetor(char vetor[], int *qntdV){

    printf("Digite uma palavra ou frase para testar se ela é palíndrome: ");
    fgets(vetor, MAXSTR , stdin);     

    (*qntdV) = strlen(vetor) - 1; //tirando o barra N

}

//Conferir se é

void palindroma(char vetor[], int qntdV){

    int in; 
    int fim = qntdV - 1;

    while(in < fim){

        if(vetor[in] == ' '){
            in++;
            continue; 
        }

        if (vetor[fim] == ' ')
        {
            fim--; 
            continue;
        }
        

        if (vetor[in] != vetor[fim]){ //vai testando letra por letra
            
            printf("Não é o palíndrome!"); 
            return;
        }
        in++; 
        fim--; 
    }

    printf("É palíndrome!");

}

//Programa principal 

int main(){

    SetConsoleOutputCP(65001);

    char vetor[MAXSTR]; 
    int qntdV = 0; 

    lerVetor(vetor, &qntdV); 
    palindroma(vetor, qntdV);

    return 0; 

}
