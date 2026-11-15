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

    //Atribuição entre estruturas 
    struct pessoa p = {"Ricardo", "Rua 1", 31, 101};
    struct pessoa p2; 
    strcpy(p2.nome, p.nome); 
    strcpy(p2.rua, p.rua);
    p2.idade = p.idade;
    p2.numero = p.numero; 

    printf("%s\n", p2.nome); 
    printf("%s\n", p2.rua);
    printf("%d\n", p2.idade);
    printf("%d\n", p2.numero);
     

    //ou como elas são do mesmo tipo podemos apenas fazer p2 = p; APENAS QUANDO SÃO DO MESMO TIPO (DA MESMA DEFINIÇÃO DE STRUCT)!!!!!
    
}