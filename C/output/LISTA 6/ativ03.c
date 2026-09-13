#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>
#include <time.h> 
#define MAX 21 

//----------------PREENCHER------------------//

void encherVetor( int *vetor){

    int i;
    int tamanho = 100; 

    for ( i = 0; i < tamanho; i++)
    {
        vetor[i] = 100 - i; 
    }
    
}


//----------------PROGRAMA PRINCIPAL------------------//

int main(){ 
    
    SetConsoleOutputCP(65001); 
    
    int  vetorNums[MAX]; 
    int qntd = 100; 
    
    encherVetor(vetorNums);
    imprimir(vetorNums, qntd);

    return 0; 
}