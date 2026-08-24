#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

int main()
{ 
    float n1, valor; 

    SetConsoleOutputCP(65001);

    printf("Digite um número: "); 
    scanf("%f", &n1); 



    if (n1 <= 1){
        printf("Valor = 1");

    }else if (1 < n1 && n1 <= 2){
        printf("Valor = 2");

    }else if(2 < n1 && n1 <= 3){
        valor = pow(n1,2); 
        printf("valor = %.2f", valor);

    }else if(n1 > 3){
        valor = pow(n1,3);
        printf("valor = %.2f", valor);
    }
   
    return 0; 

}