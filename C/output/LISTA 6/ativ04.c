#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>
#include <time.h> 
#define MAX 21 

//----------------PREENCHER------------------//

void encherVetor( int *vetor, int qntd){

    int i;
    int min = 1;
    int max = 100;  

    for ( i = 0; i < qntd; i++)
   {
        vetor[i] = min + rand() % (max - min + 1); 
    }
    
}

//----------------PERCORRER------------------//

void percorrer(int *vetor, int *vetorP, int *vetorI, int qntd, int *contP, int *contI){

    int i; 

    for (i = 0; i < qntd; i++)
    {
            if (vetor[i] % 2 == 0){

                vetorP[*contP] = vetor[i];
                *contP = *contP + 1;

            }else if (vetor[i] % 2 != 0){

                vetorI[*contI] = vetor[i];
                *contI = *contI + 1; 
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
    srand(time(NULL));
    
    int  vetorNums[MAX], vetorPar[MAX], vetorImpar[MAX]; 
    int qntd = 20; 
    int contP = 0; 
    int contI = 0; 
    
    encherVetor(vetorNums, qntd);
    percorrer(vetorNums, vetorPar, vetorImpar, qntd, &contP, &contI);
    
    printf("Vetor de números aleatórios: \n\n"); 
    imprimir(vetorNums, qntd);

    printf("\n\nVetor de números Pares: \n\n"); 
    imprimir(vetorPar, contP);

    printf("\n\nVetor de números impares: \n\n"); 
    imprimir(vetorImpar, contI);

    return 0; 
}