#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

int main(int argc, char const *argv[])
{
    float prod, desc, vdesc, vtotal; 
    
    SetConsoleOutputCP(65001);

    printf("Digite o valor do produto: "); 
    scanf("%f", &prod); 

    printf("Digite o valor do desconto em porcentagem (ex: 10): ");
    scanf("%f", &desc);

    vdesc = prod * (desc/100);
    vtotal = prod - vdesc; 

    printf("O valor do produto com o desconto é: %.2f\n", vtotal); 
    printf("Desconto aplicado de: %.2f", vdesc); 
    return 0; 

}