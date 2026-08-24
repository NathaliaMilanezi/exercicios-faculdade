#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

int main(int argc, char const *argv[])
{
    float sMin, sal, ct; 

    SetConsoleOutputCP(65001);

    printf("Digite o salário mínimo: "); 
    scanf("%f", &sMin);
    
    printf("Digite o seu salário: "); 
    scanf("%f", &sal); 

    ct = sal/sMin; 

    printf("Você recebe %.2f salários minímos", ct);

    return 0; 

}