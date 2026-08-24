
#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

int main(int argc, char const *argv[])
{
    float prod, desc, vdesc; 

    printf("Digite o valor do produto: "); 
    scanf("%f", &prod); 

    vdesc = (prod * 0.09);
    desc = prod - vdesc; 

    printf("O valor do produto com o desconto é: %.2f\n", desc); 
    printf("Desconto aplicado de: %.2f", vdesc); 
    return 0; 

}