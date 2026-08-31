#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>
#include <time.h> 

//----------------LER OS PONTOS------------------//

void lerNum(float *x, float *y){

    printf("Digite o valor de X: ");
    scanf("%f", x); 

    printf("Digite o valor de y: "); 
    scanf("%f", y); 
}

//----------------PERÍMETRO------------------//

void perimetro(float x1, float y1, float x2, float y2, float x3, float y3){

    float perimetro; 

    perimetro = (sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2))) + (sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2))) + (sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2)));

    printf("%.2f", perimetro); 
}
//----------------PROGRAMA PRINCIPAL------------------//

int main(){ 
    
    SetConsoleOutputCP(65001); 
    
    float x1, x2, x3, y1, y2, y3; 

    printf("Pontos A\n"); 
    lerNum(&x1, &y1); 

    printf("Pontos B\n"); 
    lerNum(&x2, &y2);

    printf("Pontos C\n"); 
    lerNum(&x3, &y3);

    perimetro(x1, y1, x2, y2, x3, y3); 
    return 0; 
}