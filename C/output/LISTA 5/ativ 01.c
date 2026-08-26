#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>
#include <time.h> 
//----------------LER OS PONTOS------------------//

void lerNum(float *x, float *y){
    
    printf("Digite o valor de X: ");  
    scanf("%f", x); 
    
    printf("Digite o valor de Y: ");  
    scanf("%f", y); 
}

//----------------CÁLCULO------------------//

void calculoH(float x1, float x2, float y1, float y2){  

    float calc; 
    
    calc = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    
    printf("\nA distância é igual a: %.2f\n", calc);  
}

//----------------PROGRAMA PRINCIPAL------------------//

int main(){ 
    SetConsoleOutputCP(65001); 
    
    float x1, x2, y1, y2; 
    
    printf("Comece digitando os primeiros pontos (x1, y1)\n");  
    
    lerNum(&x1, &y1);
    
    printf("\nAgora digite os segundos pontos (x2, y2)\n");  
    
    lerNum(&x2, &y2); 
    
    calculoH(x1, x2, y1, y2); 
    
    return 0; 
}