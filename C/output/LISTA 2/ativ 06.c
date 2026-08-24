#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

int main()
{ 
    int idade; 

    SetConsoleOutputCP(65001);

    printf("Digite sua idade: "); 
    scanf("%d", &idade); 

    if (idade > 16){
        printf("Não elegível");

    }else if (idade >= 18 && idade < 65){
        printf("Eleitor obrigatório"); 

    }else if(16 <= idade < 18 && idade < 65){
         printf("Eleitor facultativo");

    }
   
    return 0; 

}