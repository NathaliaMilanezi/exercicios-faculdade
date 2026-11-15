#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

struct pessoa{

    char nome[50], rua[50];
    int idade, numero;

};

int main(){

    SetConsoleOutputCP(65001);

    struct pessoa p;
    
    strcpy(p.nome, "Nathália"); //copiando o meu nome para a string, o mesmo com a string abaixo. 
    strcpy(p.rua, "Rua 1");

    p.idade = 31;
    p.numero = 101;

    printf("%s\n", p.nome); 
    printf("%s\n", p.rua);
    printf("%d\n", p.idade);
    printf("%d\n", p.numero);

    //outras maneiras de definir: 

    //struct pessoa p = {"Ricardo", "Rua 1", 31, 101}; 
    
}