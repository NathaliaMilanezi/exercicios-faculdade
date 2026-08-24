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

    if (idade < 18){
        printf("Menor de idade");

    }else if (idade >= 18 && idade < 65){
        printf("Maior de idade"); 

    }else{ 
        printf("Idoso"); 
    }
   
    return 0; 

}