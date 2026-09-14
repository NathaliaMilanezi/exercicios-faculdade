#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>
#include <time.h> 
#define MAX 21 

//----------------PREENCHER------------------//

void encherVetor( int *vetor){

    int i;
    int tamanho = 20; 

    for ( i = 0; i < tamanho; i++)
    {
        vetor[i] = 20 - i; 
    }
    
}

//----------------PERCORRER------------------//

void percorrer(int *vetor, int qntd){

    int i;

    for (i = 0; i < qntd; i++)
    {
            if (vetor[i] % 2 == 0){

                vetor[i] = vetor[i] * vetor[i];

            }else if (vetor[i] % 2 != 0){

                vetor[i] = vetor[i] * vetor[i]* vetor[i];
            }
            
            
    }
}

//----------------IMPRIMIR------------------//

void imprimir(int *vetor, int qntd){

    int i; 

    for (i = 0; i < qntd; i++)
    {
        printf("%d\n", vetor[i]);
    }


}

//----------------PROGRAMA PRINCIPAL------------------//

int main(){ 
    
    SetConsoleOutputCP(65001); 
    
    int  vetorNums[MAX]; 
    int qntd = 20; 
    
    encherVetor(vetorNums);
    percorrer(vetorNums, qntd);
    imprimir(vetorNums, qntd);

    return 0; 
}