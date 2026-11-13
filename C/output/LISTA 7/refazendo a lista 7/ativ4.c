#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <direct.h>
#define MAXSTR 100

//Ler o vetor

void lerVetor(char vetor[], int *qntdV, char *caractere){

    printf("Digite uma frase ou palavra: ");
    fgets(vetor, MAXSTR , stdin);     

    (*qntdV) = strlen(vetor); 
    vetor[(*qntdV) - 1] = '\0'; 

    printf("Agora digite o caractere que você quer saber a quantidade: ");
    scanf(" %c", caractere);


}

//Contador de caractere

void contCaractere(char vetor[], int qntdV, char caractere){

    int i, cont = 0;

    for ( i = 0; i < qntdV; i++)
    {
        if (vetor[i] == caractere)
        {
            cont++; 
        }
        
    }

    printf("Quantidade de vezes que o caractere %c aparece: %d", caractere, cont); 
    
}

//Programa principal
int main(){

    SetConsoleOutputCP(65001);

    char vetor[MAXSTR]; 
    int qntdV = 0;
    char caractere; 

    lerVetor(vetor, &qntdV, &caractere);
    contCaractere(vetor, qntdV, caractere);   
}