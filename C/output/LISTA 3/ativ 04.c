#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

int main()
{ 
    int maior, menor, soma;
    soma = 0; 

    SetConsoleOutputCP(65001);

    printf("Digite o limite inferior: ");
    scanf("%d", &menor);
    
    
    do{
        printf("Digite o limite superior: ");
        scanf("%d", &maior);
    }while (maior <= menor); 
    
    for (int i = menor + 1; i < maior; i++){
        
    if (i % 2 == 0){
            printf("%d\n", i);
            soma = soma + i; 
        }
    }
    
    printf("Soma: %d", soma); 
       
    return 0; 

}