#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

int main()
{ 
    float n1, n2, n3, media; 

    SetConsoleOutputCP(65001);

    printf("Digite sua primeira nota: "); 
    scanf("%f", &n1); 

    printf("Digitie sua segunda nota: ");
    scanf("%f", &n2);
    
    printf("Digite sua terceira nota: "); 
    scanf("%f", &n3);

    media = (n1 + n2 + n3)/3; 


    if (media >= 7){
        printf("Média: %.2f\n", media); 
        printf("Aprovado");

    }else if (3 <= media < 7 ){
        printf("Média: %.2f\n", media); 
        printf("Prova final"); 

    }else if(media <= 3){
        printf("Média: %.2f\n", media); 
        printf("Reprovada");

    }
   
    return 0; 

}