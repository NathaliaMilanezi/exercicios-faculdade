#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

int main(int argc, char const *argv[])
{
    float tempC, tempF; 

    SetConsoleOutputCP(65001);

    printf("Digite a temperatura Fahrenheit: ");
    scanf("%f", &tempF);

    tempC = (5 * tempF - 160) / 9;

    printf("A temperatura em graus centígrados é igual a: %.2f", tempC); 

    return 0; 

}