#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

int main()
{ 
    int cod, peso, altura, pesoMaior, pesoMenor, alturaMaior, alturaMenor, codMNP, codMP, codMNA, codMA, somaP, somaA, cont, mediaP, mediaA; 
    cod = 1; 
    pesoMaior = 0;
    pesoMenor = 999; 
    alturaMaior = 0;
    alturaMenor = 999;
    cont = 0; 
    somaP = 0;
    somaA = 0; 

    SetConsoleOutputCP(65001); 
    
    while (cod != 0){
        
        do{
            printf("Digite seu código: ");
            scanf("%d", &cod);
            
            if (cod == 0) {
                break;  // Sai do loop se código for 0
            }
            
        } while (cod < 0); 
        
        // Verifica se o código é 0 para sair do loop principal
        if (cod == 0) {
            break;
        }
        
        do
        {
            printf("Digite seu peso: ");
            scanf("%d", &peso); 

        } while (peso < 0);

        do
        {
            printf("Digite sua altura em cm: ");
            scanf("%d", &altura); 

        } while (altura < 0);
        
        // Verificação de peso - usando if separados
        if (peso < pesoMenor){ 
            pesoMenor = peso; 
            codMNP = cod;
        }
        
        if (peso > pesoMaior){
            pesoMaior = peso; 
            codMP = cod; 
        }
        
        // Verificação de altura - usando if separados
        if (altura < alturaMenor){
            alturaMenor = altura; 
            codMNA = cod;
        }
        
        if (altura > alturaMaior){
            alturaMaior = altura;
            codMA = cod; 
        }

        somaA = somaA + altura;
        somaP = somaP + peso; 
        cont = cont + 1; 
    }

    // Verifica se há dados para calcular médias
    if (cont > 0) {
        mediaA = somaA/cont; 
        mediaP = somaP/cont;

        printf("\nResultados\n"); 
        printf("Peso maior: %d - Código do peso maior: %d\n", pesoMaior, codMP); 
        printf("Peso menor: %d - Código do peso menor: %d\n", pesoMenor, codMNP);
        printf("Altura maior: %d - Código da altura maior: %d\n", alturaMaior, codMA);
        printf("Altura menor: %d - Código da altura menor: %d\n", alturaMenor, codMNA);
        printf("A média das alturas: %d\n", mediaA); 
        printf("Média dos pesos: %d\n", mediaP);
    } else {
        printf("\nNenhum dado foi inserido.\n");
    }

    return 0; 
}