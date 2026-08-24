#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{ 
    int cod, qnt;
    float preco, valorT, vd, vtd;  

    SetConsoleOutputCP(65001);

    printf("Digite o código do produto: ");
    scanf("%d", &cod); 

    printf("Digite a quantidade do produto: ");
    scanf("%d", &qnt); 

    // Determina o preço unitário
    if (cod >= 1 && cod <= 10) {
        preco = 10.0;
    }
    else if (cod >= 11 && cod <= 20) {
        preco = 15.0; 
    }
    else if (cod >= 21 && cod <= 30) {
        preco = 20.0; 
    }
    else if (cod >= 31 && cod <= 40) {
        preco = 30.0; 
    }
    else {
        printf("Código inválido!\n");
        return 1;
    }

    // Calcula o valor total
    valorT = preco * qnt;

    // Determina o desconto conforme o valor total
    if (valorT <= 250.0) {
        vd = valorT * 0.05;  // 5%
    }
    else if (valorT <= 500.0) {
        vd = valorT * 0.10;  // 10%
    }
    else {
        vd = valorT * 0.15;  // 15%
    }

    // Valor final
    vtd = valorT - vd;

    printf("\n=== NOTA FISCAL ===\n");
    printf("Preço unitário: R$ %.2f\n", preco);
    printf("Valor total: R$ %.2f\n", valorT); 
    printf("Valor do desconto: R$ %.2f\n", vd);
    printf("Valor total final: R$ %.2f\n", vtd); 

    return 0; 
}