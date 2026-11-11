#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>
#include <time.h> 
#include <string.h>
#include <direct.h>
#define MAX 100

int main(){

    SetConsoleOutputCP(65001);

    FILE * arq;
    arq = fopen("meuarquivo.txt", "w");

    float n1 = 2.76;
    float total = 5.8; 
    
    if (arq == NULL){

        //Essa ação acontece se der erro na leitura do arquivo ----> o arquivo não é encontrado no diretório. 
        printf("Erro na leitura do arquivo"); 
        exit(1); 
    }

    fprintf(arq, "Primeira linha do arquivo\n");
    fprintf(arq, "Segunda linha do arquivo\n"); 
    fprintf(arq, "Número: %.2f   \nTotal: %.2f", n1, total);

    
    printf("Fim do programa"); 
    return 0; 

}

//fscanf(arq, "%d")

// r -> para abrir o arquivo
// w -> cria um arquivo novo ou apaga tudo que tem dentro do arquivo
// a -> abre para escrever no final do arquivo (cria se não existir)



