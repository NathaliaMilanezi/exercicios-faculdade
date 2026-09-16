#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>
#include <time.h> 
#define MAX 9999 

//----------------PREENCHER------------------//

void encherVetor( int *vetor, int *qntd){

    int altura;
    char continuar = 'S'; 
    
    while (continuar == 'S' && *qntd < MAX){

        do{
      
        printf("Olá, atleta! Digite sua altura em cm: ");
        scanf("%d", &altura); 

        } while (altura > 215 || altura < 140 );

        vetor[*qntd] = altura;
        (*qntd)++;  

        if (*qntd < MAX)
        {
        
        do{

        printf("Deseja continuar (S/N)?: ");
        scanf(" %c", &continuar);
            
        } while (continuar != 'S' && continuar != 'N' && *qntd < MAX);
            
        }
        
        
    }    
}

//----------------PREENCHER------------------//




//----------------PROGRAMA PRINCIPAL------------------//

int main(){ 
    
    SetConsoleOutputCP(65001); 
    srand(time(NULL));
    
    int  vetorAltura[MAX]; 
    int qntd = 0; 
    
    encherVetor(vetorAltura, &qntd);


    return 0; 
}

//TERMINAR ISSO OUTRO DIA