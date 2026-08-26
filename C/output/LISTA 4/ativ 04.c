#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação

#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>> // Para os números aleatórios

//----------------LANÇAR OS DADOS------------------//

int lancarDado(){
    return (rand() % 6) + 1;
}

//----------------JOGAR OS DADOS------------------//

int jogarDados(){

    int d1, d2, soma; 
    printf("\n\n Vamos jogar os dados\n");
    system("PAUSE"); 

    d1 = lancarDado();
    d2 = lancarDado();
    soma = d1 + d2; 

    printf("Dado 1: %d\nDado 2: %d\n\n", d1,d2);
    printf("SOMA: %d\n", soma);
    return soma; 

}

//----------------REGRAS------------------//

void jogo(){

    char continuar; 
    int soma, ponto; 
    soma = jogarDados(); 

    continuar = 'S'; 

    if (soma == 7 || soma == 11){

        printf("Párabens você ganhou!"); 

    }else if (soma == 2 || soma == 3 || soma == 12){

        printf("Sinto muito, você perdeu!");  

    } else{

        printf("Você conquistou o ponto: %d\n", soma);
        printf("Tire-o novamente para ganhar\n"); 
        
        while (continuar == 'S'){

            ponto = jogarDados(); 

            if (ponto == soma){

                printf("Párabens você ganhou!"); 
                break;

            }else if(ponto == 7){

                 printf("Sinto muito, você perdeu!");
                 break;

            }

        }
    }
}

//----------------PROGRAMA PRINCIPAL------------------//

int main()
{ 
    SetConsoleOutputCP(65001); 
    
    srand ((unsigned)time(NULL)); //SEMENTE DOS NÚMEROS ALEATÓRIOS

    jogo();

    return 0; 
}