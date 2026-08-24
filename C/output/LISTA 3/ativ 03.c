#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

int main()
{ 
    int cont, num, menor;
    menor = 2147483647;

    SetConsoleOutputCP(65001);

    printf("Digite a quantidade de números a serem lidos: ");
    scanf("%d", &cont);
    

   for (int i = 0; i < cont; i++){

    do {
        printf("Digite um número: ");
        scanf("%d", &num);
    } while ( num < 0 ) ;
    
    if (num < menor){

        menor = num; 
    }
   }
    
    printf("O menor número foi: %d", menor);   
    return 0; 

}