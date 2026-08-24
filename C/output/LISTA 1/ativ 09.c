#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

int main(int argc, char const *argv[])
{
    float km, ct; 
    int dias; 

    SetConsoleOutputCP(65001);

    printf("Digite a quantidade de dias que você alugou o carro: "); 
    scanf("%d", &dias);
    
    printf("Digite quantos km você rodou durante esses dias: "); 
    scanf("%f", &km); 

    ct = (60 * dias) + (km * 0.15); 

    printf("O total é de: %.2f reais", ct);

    return 0; 

}