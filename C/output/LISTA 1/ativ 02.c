
#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

int main(int argc, char const *argv[])
{
    float an, a1, q, n; 

    SetConsoleOutputCP(65001);

    printf("Digite o primeiro termo da sua P.G: ");
    scanf("%f", &a1);

    printf("Digite a razão da sua P.G: ");
    scanf("%f", &q);

    printf("Digite o a posição do número que você deseja: ");
    scanf("%f", &n); 

    an = a1 *  pow(q, n-1);

    printf("O valor é: %.2f", an); 
    return 0; 

}