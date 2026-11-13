#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <direct.h>
#define MAXSTR 100

//Ler o vetor

void lerVetor(char vetor[], int *qntdV){

    printf("Digite uma data para inverta-lá no padrão Estados Unidos: ");
    fgets(vetor, MAXSTR , stdin);     

    (*qntdV) = strlen(vetor); 
    vetor[(*qntdV) - 1] = '\0'; 

}

//Invertendo

void invertendo(char vetor[]){

    char dia[MAXSTR];
    char mes[MAXSTR];
    char ano[MAXSTR];  

    int i = 0;//percorrer o vetor
    int p = 0;//contador do vetor 

    while (vetor[i] != '/'){
        
        dia[p] = vetor[i]; 
        i++;
        p++;
    }
    
    dia[p] = '\0';
    i++;
    p = 0;

    while (vetor[i] != '/')
    {
        mes[p] = vetor[i];
        i++;
        p++; 
    }
    
    mes[p] = '\0'; 
    i++;
    p = 0; 
     

    while (vetor[i] != '\0')
    {
        ano[p] = vetor[i];
        i++; 
        p++;
    }
    
    ano[p] = '\0'; 

    printf("Data: %s-%s-%s", ano, mes, dia);
}

//Programa principal
int main(){

    SetConsoleOutputCP(65001);

    char vetor[MAXSTR]; 
    int qntdV = 0;

    lerVetor(vetor, &qntdV);
    invertendo(vetor);
}