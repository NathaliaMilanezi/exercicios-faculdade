#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>
#include <time.h> 

//----------------LER NÚMERO------------------//

void lerNum(float *x, float *y){

    printf("Digite o valor de X: ");
    scanf("%f", x); 

    printf("Digite o valor de y: "); 
    scanf("%f", y); 
}

//----------------CALCULO------------------//

void conta(float x, float y){

    float cont, calc;
    cont = 0;
    calc = 0;  

    while (cont < x){

        calc = calc + y;
        cont = cont + 1; 
    }

    printf("Resultado: %.2f", calc);  
}

//----------------PROGRAMA PRINCIPAL------------------//

int main(){ 
    
    SetConsoleOutputCP(65001); 
    
    float  x, y; 

    lerNum(&x, &y); 
    conta(x, y); 

    return 0; 
}