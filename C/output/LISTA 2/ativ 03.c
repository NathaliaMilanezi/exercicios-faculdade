#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

int main(int argc, char const *argv[])
{ 
    float a, b, c, maior, menor, meio; 

    SetConsoleOutputCP(65001);

    printf("Digite um número A: "); 
    scanf("%f", &a);
    
    printf("Digite um número B: "); 
    scanf("%f", &b);

    printf("Digite um número C: "); 
    scanf("%f", &c);

    if (a > b & a > c){
        maior = a;

    }else if (b > a & b > c){
        maior = b;

    }else{
        maior = c; 

    }
    
    if (a < b & a < c){
        menor = a;

    }else if (b < a & b < c){
        menor = b; 

    }else{ 
        menor = c;

    }

    meio = (a + b + c) - maior - menor; 

    printf("%.2f, %.2f e %.2f", maior, meio,menor);

    return 0; 

}