#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>
#include <time.h> 
#define MAX 101 

//----------------NUM ALEATÓRIO------------------//


//----------------PREENCHER------------------//

void encherVetor( int *vetor, int qntd){

    int i = 0;
    int min = 1;
    int max = 1000;  

    while (i < qntd)
        vetor[i] = min + rand() % (max - min + 1); 
    

}

//----------------PEQUISAR------------------//

int pesquisar(int *vetor, )





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
    int qntd = 100; 
    int pesq; 

    return 0; 
}