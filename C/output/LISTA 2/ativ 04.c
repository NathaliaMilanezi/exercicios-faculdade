#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

int main(int argc, char const *argv[])
{ 
    int n1;

    SetConsoleOutputCP(65001);

    printf("Digite um número: ");
    scanf("%d", &n1); 

    if (n1 % 10 == 0){
        printf("Divisível por 10");
        
    }else if(n1 % 5 == 0){
        printf("Divisível por 5");

    }else if(n1 % 2 == 0){
        printf("Divisível por 2");

    }else{
        printf("Não é divisível por nenhum");
    }

    return 0; 

}