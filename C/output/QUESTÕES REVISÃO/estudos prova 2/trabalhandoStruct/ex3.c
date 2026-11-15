#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

struct endereco{

    char rua[50];
    int numero; 

};

typedef struct endereco ender; 

struct pessoa{

    char nome[50];
    int idade;
    ender end;
     

};

typedef struct pessoa pes; 

int main(){

    SetConsoleOutputCP(65001);

    pes p; 
    
    strcpy(p.nome, "Nathália"); 
    p.end.numero = 32; 

    printf("%s\n", p.nome); 
    printf("%d", p.end.numero); 
    
}