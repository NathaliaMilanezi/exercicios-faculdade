#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <direct.h>
#define MAXSTR 100

//Ler vetor

void lerVetor(char vetor[]){

    printf("Digite uma palavra ou frase para contar quantos caracteres ela tem: ");
    fgets(vetor, MAXSTR , stdin);    

}

//Contando os caracteres

void contarCaracteres(char vetor[], int *qntdV){

    int i = 0;

    while (vetor[i] != '\0')
    {
        i++;
        (*qntdV)++;
    }
    
    (*qntdV) = (*qntdV) - 1; //tirando o \n do enter

}

//Programa principal


int main(){

    SetConsoleOutputCP(65001);

    char vetor[MAXSTR]; 
    int qntdV = 0; 

    lerVetor(vetor);
    contarCaracteres(vetor, &qntdV); 
    
    printf("Total de caracteres: %d", qntdV); 

}