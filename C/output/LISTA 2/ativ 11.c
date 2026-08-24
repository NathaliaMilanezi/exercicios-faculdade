#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

int main()
{ 
    int n1;  

    SetConsoleOutputCP(65001);

    printf("Digite um número inteiro de 1 a 12: ");
    scanf("%d", &n1); 

    switch (n1)
    {
    case 1:
        printf("Janeiro\n");
        break;
    
    case 2:
        printf("Fevereiro\n");
        break;

    case 3: 
        printf("Março\n");
        break;

    case 4:
        printf("Abril\n");
        break;
    
    case 5:
        printf("Maio\n"); 
        break;
    
    case 6:
        printf("Junho\n");
        break; 
    
    case 7:
        printf("Julho\n");
        break;
    
    case 8:
        printf("Agosto\n");
        break;
    
     
    case 9:
        printf("Setembro\n");
        break;
    
     
    case 10:
        printf("Outbro\n");
        break;
    
     
    case 11:
        printf("Novembro\n");
        break;
    
     
    case 12:
        printf("Dezembro\n");
        break;

    default:
        printf("Número inválido! Digite de 1 a 12\n");
        break;
    } 
    
    return 0; 

}