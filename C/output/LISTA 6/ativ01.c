#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>
#include <time.h> 
#define MAX 100

//----------------PREENCHER------------------//

void encherVetor( int *vetor){

    int i;
    int tamanho = 100; 

    for ( i = 0; i < tamanho; i++)
    {
        vetor[i] = 100 - i; 
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
    
    int  vetor[MAX]; 
    int qntd = 100; 
    
    encherVetor(vetor);
    imprimir(vetor, qntd);

    return 0; 
}