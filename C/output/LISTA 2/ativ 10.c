#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

int main()
{ 
    int n1;  

    SetConsoleOutputCP(65001);

    printf("Digite um número inteiro de 1 a 7: ");
    scanf("%d", &n1); 

    switch (n1)
    {
    case 1:
        printf("Domingo\n");
        break;
    
    case 2:
        printf("Segunda\n");
        break;

    case 3: 
        printf("Terça\n");
        break;

    case 4:
        printf("Quarta\n");
        break;
    
    case 5:
        printf("Quinta\n"); 
        break;
    
    case 6:
        printf("Sexta\n");
        break; 
    
    case 7:
        printf("Sabádo\n");
        break;

    default:
        printf("Número inválido! Digite de 1 a 7\n");
        break;
    } 
    
    return 0; 

}