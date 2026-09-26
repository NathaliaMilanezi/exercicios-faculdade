#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>
#include <string.h>
#include <time.h> 
#define MAXSTR 9999 

//----------------LER VETOR------------------//

void lerVetor(char vetor[]){

    printf("Digite uma palavra ou frase: ");
    fgets(vetor, MAXSTR, stdin);

}

//----------------CONTADOR DO TAMANHO DA STRING------------------//

void contador(char vetor[]){

    int i; 

    while (vetor[i] != '\0')
    {
        i++; 
    }
    
    i = i - 1;

    printf("Quantidade de caracteres no vetor: %d", i); 
}

//----------------PROGRAMA PRINCIPAL------------------//

int main(){ 
    
    char vetor[MAXSTR];

    lerVetor(vetor); 
    contador(vetor); 

    return 0; 
}