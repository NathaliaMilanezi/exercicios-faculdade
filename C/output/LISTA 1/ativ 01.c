
#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação

int main(int argc, char const *argv[])
{
    float an, a1, n, r;

    SetConsoleOutputCP(65001);

    printf("Digite qual a posiçao do numero da sua P.A que deseja encontrar: ");
    scanf("%f", &n);

    printf("Digite o primeiro termo da sua P.A: ");
    scanf("%f", &a1);

    printf("Digite a razão da sua P.A: ");
    scanf("%f", &r);

    an = a1 + (n-1) * r;

    printf("O resultado é: %.2f", an);

}