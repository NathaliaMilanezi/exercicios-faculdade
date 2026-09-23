#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>
#include <string.h>
#include <time.h> 
#define MAXSTR 9999 

//----------------LER VETOR------------------//

void lerVetor(char vetor[], int *qntd){

    printf("Digite a frase ou palavra que voce deseja testar: ");
    fgets(vetor, MAXSTR, stdin);

    *qntd = strlen(vetor) - 1; //espaço do /n

}

//----------------VER SE É IGUAL------------------//

void teste(char vetor[], int qntd){

    int inicio = 0; //começa a ler da primeira letra, que no caso seria "m"
    int fim = qntd - 1; //começa a ler da ultíma letra, que seria o ultímo "m"

    while (inicio < fim)
    {
        if (vetor[inicio] != vetor[fim]) //se as duas letras já forem diferentes não é uma palavra palindroma.  
        {
            printf("Nao eh palindromo.\n");
            return;
        }
        inicio++; //vai somando para as outras letras letras serem conferidas se são iguais, até o inicio e o fim se encontrarem. 
        fim--;
    }

    printf("Eh palindromo.\n");
}

//----------------PROGRAMA PRINCIPAL------------------//

int main(){ 
    
    char vetor[MAXSTR];
    int qntd; 

    lerVetor(vetor, &qntd); 
    teste(vetor, qntd); 


    return 0; 
}

