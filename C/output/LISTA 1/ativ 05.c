#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

int main(int argc, char const *argv[])
{
    float tempC, tempF; 

    SetConsoleOutputCP(65001);

    printf("Digite a temperatura em graus centígrados: ");
    scanf("%f", &tempC);

    tempF = (9 * tempC + 160)/5; 

    printf("A temperatura em Fahrenheit é igual a: %.2f", tempF); 

    return 0; 

}