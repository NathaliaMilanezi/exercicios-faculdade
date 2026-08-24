#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

int main(int argc, char const *argv[])
{
    float a, b, c; 

    SetConsoleOutputCP(65001);

    printf("Digite o valor de a: "); 
    scanf("%f", &a); 

    printf("Digite o valor de b: "); 
    scanf("%f", &b); 

    c = b; 
    b = a;

    printf("Valor de a: %.2f\n", c); 
    printf("valor de b: %.2f", b); 

    return 0; 

}