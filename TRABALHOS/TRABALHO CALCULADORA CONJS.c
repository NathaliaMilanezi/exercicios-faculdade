#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define MAX 100

//----------------LER CONJUNTOS------------------//

void lerConjuntos(int *conj, int *qntd){

    int elem;
    char cont = 'S';  

    while (((cont == 'S') || (cont == 's')) && (*qntd < MAX))
    {
        printf("Insira o elemento %d do seu conjunto: \n", (*qntd + 1));
        scanf("%d", &elem);

        if (pesquisar(conj, *qntd, elem) == -1){
                
            conj[*qntd] = elem;
            (*qntd)++; 
            
        }else{

            printf("Este elemento já está no conjunto!\n"); 
            
        }
        
        do
        {
            printf("Deseja continuar (S/N)?\n: ");
            scanf(" %c", &cont); 

        } while ((cont != 'S') && (cont != 's') && (cont != 'N') && (cont != 'n') );
         
    }

}

//----------------UNIÃO------------------//

//----------------PROGRAMA PRINCIPAL------------------//

int menu() {
        int op;

        printf("\n\n----- MENU DE OPERAÇÕES -----");
        printf("\n\n0 - Sair");
        printf("\n\n1 - União (A U B)");
        printf("\n2 - Interseção (A ∩ B)");
        printf("\n3 - Diferença (B - A)");
        printf("\n4 - Diferença (A - B)");
        printf("\n5 - Diferença Simétrica (A ∆ B)");
    
        printf("\n\nInsira a opção equivalente a operação que deseja realizar: ");
        scanf("%d", &op);
        return op;
}

void listar (int *vetor, int quant) {
    int i;
    for (i = 0; i < quant; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");
}

int main() {

    SetConsoleOutputCP(65001);
    
    int conjA[MAX];
    int conjB[MAX];
    int qntdA = 0, qntdB = 0, opcao;

    int conjRes[MAX];
    int qntdRes = 0;

    printf("Digite os elementos do conjunto A:\n");
    lerConjuntos(conjA, &qntdA);

    printf("Digite os elementos do conjunto B:\n");
    lerConjuntos(conjB, &qntdB);
    
    
    listar(conjA, qntdA);
    listar(conjB, qntdB);

    do {
        
        opcao = menu();

        switch(opcao){
            case 0:
                break;
            case 1:
                printf("\n\nUnião de A e B: ");
 //               uniao(...);
                break;
            case 2:
                printf("\n\nInterseção de A e B: ");
 //               intersecao(...);
                break;
            case 3:
                printf("\n\nDiferença de A - B: ");
 //               diferenca(...);
                break;
            case 4:
                printf("\n\nDiferença de B - A: ");
 //               diferenca(...);
                break;
            case 5:
                printf("\n\nDiferença Simétrica de A ∆ B: ");
 //               diferencaSimetrica(...);
                break;
            default:
                printf("\n\nOpção inválida! Tente novamente.");

        }

    } while (opcao != 0);

    return 0;
}