#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

int main()
{ 
    float n1, n2, n3, n4, n5, media, menor, maior;  

    SetConsoleOutputCP(65001);

    printf("Digite a 1° nota: ");
    scanf("%f", &n1); 

    printf("Digite a 2° nota: ");
    scanf("%f", &n2); 

    printf("Digite a 3° nota: ");
    scanf("%f", &n3); 

    printf("Digite a 4° nota: ");
    scanf("%f", &n4); 

    printf("Digite a 5° nota: ");
    scanf("%f", &n5); 

    if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5){
        
        maior = n1; 

    }else if(n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5){

        maior = n2; 
    
    }else if(n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5){

        maior = n3; 

    }else if(n4 > n1 && n4 > n2 && n4 > n3 && n4 > n5){

        maior = n4; 

    }else{

        maior = n5; 
    }

    if (n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5){
        
        menor = n1; 

    }else if (n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5){

        menor = n2; 

    }else if (n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5){

        menor = n3; 

    }else if(n4 < n1 && n4 < n2 && n4 < n3 && n4 < n5){

        menor = n4; 

    }else{

        menor = n5; 

    }
        
    media = (n1 + n2 + n3 + n4 + n5 - maior - menor)/3;

    printf("Menor nota: %.2f\n", menor);
    printf("Maior nota: %.2f\n", maior); 
    printf("Média: %.2f\n", media); 

    return 0; 

}