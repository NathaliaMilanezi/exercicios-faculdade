#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>
#include <time.h> 
#define MAX 100

//----------------SALAS DISPONÍVEIS------------------//

void salasDisponiveis(int *vendas, int *maxSalas, int tamanho){

    int i; 

    for (i = 0; i < tamanho; i++){
        
        if (vendas[i] < maxSalas[i]){

            printf("Sala %d está disponível!: %d vagas\n", (i+1), maxSalas[i]); 

        }

    }
    
}

//----------------REALIZAR VENDA------------------//

void realizarVenda(int *vendas, int *maxSalas, int tamanho){

    int op, qntd; 
    
    do
    {
        printf("Digite o número da sala que você deseja: "); 
        scanf("%d", &op);

    } while ((op < 0) || (op > tamanho));
    
    int vagas = maxSalas[op - 1] - vendas[op - 1];

    if (vendas[op - 1] < maxSalas[op - 1]){

        do
        {
            printf("Sala disponível! Vagas restantes: %d\n", vagas);
            printf("Qual a quantidade de ingressos?: "); 
            scanf("%d", &qntd);

        } while (qntd > vagas);

        vendas[op - 1] = vendas[op - 1] + qntd; 

    }else{

        printf("Desculpe, essa sala está lotada!");
    }

}

//----------------IMPRIMIR------------------//

void imprimir(int *vendas, int tamanho){

    int i; 

    for ( i = 0; i < tamanho; i++)
    {
        if(vendas[i] > 0){

            printf("Sala %d teve %d vendas\n", (i + 1), vendas[i]); 
        }
    }

}


//----------------PROGRAMA PRINCIPAL------------------//

int main() {
    
    int maxSalas[10] = {100,110,120,120,130,130,140,140,150,150};
    int vendas[10] = {0,0,0,0,0,0,0,0,0,0};
    int op, tamanho = 10;
    
    do {
        printf("\n\t 1 - Vender ingresso");
        printf("\n\t 2 - Listar vendidos");
        printf("\n\t 0 - Sair");
        printf("\n\t Sua opção: ");
        scanf("%d", &op);
        
        switch (op){
            case 0 : break;
            
            case 1 : salasDisponiveis(vendas, maxSalas, tamanho);
                     realizarVenda(vendas, maxSalas, tamanho);
                     break;
            
            case 2 : imprimir(vendas, tamanho); 
                    break;

            default: printf("\n\n\t Opção inválida!\n");
        }

    } while ( op != 0 );
    return 0;
}