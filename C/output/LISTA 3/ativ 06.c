#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

int main()
{ 
    int num;
    
    SetConsoleOutputCP(65001);
    
    do{
        printf("Digite o último termo da sequência: ");
        scanf("%d", &num);
    }while (num <= 0); 
    
    printf("Sequência: \n"); 

    for (int i = 1; i <= num; i++)
    {
        printf("%d ", i * i);
    }
       
    return 0; 

}