#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>
#include <time.h> 
#define MAX 101 

//----------------PEQUISAR------------------//

int pesquisar(int *vetor, int qntd, int pesq){

    int i; 

    for (i = 0; i < qntd; i++){

        if(vetor[i] == pesq){

            return i;
        }

    }
    return -1; 

}

//----------------PREENCHER------------------//

void encherVetor( int *vetor, int qntd){

    int i = 0;
    int min = 1;
    int max = 1000; 
    int numA; 

    while (i < qntd){
        numA = min + rand() % (max - min + 1);

        if (pesquisar(vetor, qntd, numA) == -1)
        {
            vetor[i] = numA;
            i++; 
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
    
    int  vetorNums[MAX]; 
    int qntd = 100; 
    
    encherVetor(vetorNums, qntd);
    imprimir(vetorNums, qntd); 

    return 0; 
}