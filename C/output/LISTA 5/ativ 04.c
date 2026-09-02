#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>
#include <time.h> 

//----------------LER NÚMERO------------------//

void lerNum(int *x, int *y){

    printf("Digite o valor de X: ");
    scanf("%d", x); 

    printf("Digite o valor de y: "); 
    scanf("%d", y); 
}

//----------------CALCULO------------------//

void conta(int x, int y){

    int cont, calc;
    cont = 0;
    calc = 0;  

    while (cont < y){

        calc = calc + x;
        cont = cont + 1; 
    }

    printf("Resultado: %d", calc);  
}

//----------------PROGRAMA PRINCIPAL------------------//

int main(){ 
    
    SetConsoleOutputCP(65001); 
    
    int  x, y; 

    lerNum(&x, &y); 
    conta(x, y); 

    return 0; 
}