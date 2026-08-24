#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

int main(int argc, char const *argv[])
{ 
    float n1, n2,soma, total; 

    SetConsoleOutputCP(65001);

    printf("Digite o número 1: "); 
    scanf("%f", &n1);

    printf("Digite o número 2: "); 
    scanf("%f", &n2); 

    soma = n1 + n2; 

    if (soma > 20){
        total = soma + 8; 
        printf("Total: %.2f", total);

    }else if (soma <= 20){
        total = soma - 5; 
        printf("Total: %.2f", total);
        
    }

    return 0; 

}