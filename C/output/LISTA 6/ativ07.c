#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>
#include <time.h> 
#define MAX 101 

//----------------PREENCHER------------------//

void encherVetor( int *vetor, int *qntd){

    int altura;
    int i = 0; 
    char continuar = 'S'; 
    
    while (continuar == 'S'){

        do{
      
        printf("Olá, atleta! Digite sua altura em cm: ");
        scanf("%d", &altura); 
        vetor[i] = altura; 

        } while (altura < 215 || altura > 145 );

        do{

        printf("Deseja continuar (S/N)?: ");
        scanf("%c", &continuar);
            
        } while (continuar != 'S' && continuar != 'N');
        
        i++;
        (*qntd)++; 
    }    
}

//----------------PROGRAMA PRINCIPAL------------------//

int main(){ 
    
    SetConsoleOutputCP(65001); 
    srand(time(NULL));
    
    int  vetorAltura[MAX]; 
    int qntd = 0; 
    
    encherVetor(vetorAltura, &qntd);


    return 0; 
}