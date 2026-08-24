#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

int main()
{ 
    int num;
    int fatorial = 1;
    
    SetConsoleOutputCP(65001);
    
    do{
        printf("Digite um número maior que zero para calcular a fatorial : ");
        scanf("%d", &num);
    }while (num <= 0); 
    
    for (int i = 1; i <= num; i++)
    {
        fatorial = fatorial * i; 
    }
    
    
    printf("Fatorial: %d", fatorial); 
       
    return 0; 

}