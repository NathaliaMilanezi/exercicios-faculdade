#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define MAX 100

//----------------MENU------------------//

int menu() {
        int op;

        printf("\n\n----- MENU DE OPERAÇÕES -----");
        printf("\n\n0 - Sair");
        printf("\n\n1 - União (A U B)");
        printf("\n2 - Interseção (A ∩ B)");
        printf("\n3 - Diferença (A - B)");
        printf("\n4 - Diferença (B - A)");
        printf("\n5 - Diferença Simétrica (A ∆ B)");
    
        printf("\n\nInsira a opção equivalente a operação que deseja realizar: ");
        scanf("%d", &op);
        return op;
}


//----------------LISTAR------------------//

void listar (int *vetor, int quant) {
    int i;
    for (i = 0; i < quant; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");
}

//----------------PESQUISAR------------------//

int pesquisar(int *conj, int qntd,  int pesq){

    int i; 

    // conj -> onde vou procurar (só um vetor, não dois)
    // qntd -> quantos elementos esse vetor tem
    // pesq -> O Número que estou procurando lá dentro

    for (i = 0; i < qntd; i++){

        if(conj[i] == pesq){

            return i; // achei o número procurado nessa posição
                      // devolve a posição onde achou 
        }

    }
    return -1; // percorreu tudo e não achou -> retorna -1 
}

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

void uniao(int *conjA, int qntdA, int *conjB, int qntdB, int *conjRes, int *qntdRes){
 
    int i; 
    *qntdRes = 0;

    for ( i = 0; i < qntdB; i++)
    {
            conjRes[*qntdRes] = conjB[i]; 
            (*qntdRes)++;  

    }
    
    for ( i = 0; i < qntdA; i++)
    {
        if (pesquisar(conjB, qntdB, conjA[i]) == -1){

            conjRes[*qntdRes] = conjA[i]; 
            (*qntdRes)++;  

        }
    }

    printf("Conjunto resultado: ");
    listar(conjRes, *qntdRes);
    

}

//----------------INTERSEÇÃO------------------//

void intersecao(int *conjA, int qntdA, int *conjB, int qntdB, int *conjRes, int *qntdRes){

    int i; 
    *qntdRes = 0;

    for ( i = 0; i < qntdA; i++)
    {
        if (pesquisar(conjB, qntdB, conjA[i]) != -1){

            conjRes[*qntdRes] = conjA[i]; 
            (*qntdRes)++;  

        }
    }

    printf("Conjunto resultado: ");
    listar(conjRes, *qntdRes);
    
}

//----------------DIFERENÇA B - A------------------//

void diferencaBA(int *conjA, int qntdA, int *conjB, int qntdB, int *conjRes, int *qntdRes){

    int i; 
    *qntdRes = 0;

    for ( i = 0; i < qntdB; i++)
    {
        if (pesquisar(conjA, qntdA, conjB[i]) == -1){

            conjRes[*qntdRes] = conjB[i]; 
            (*qntdRes)++;  

        }
    }

    printf("Conjunto resultado: ");
    listar(conjRes, *qntdRes);
    
}

//----------------DIFERENÇA A - B------------------//

void diferencaAB(int *conjA, int qntdA, int *conjB, int qntdB, int *conjRes, int *qntdRes){

    int i; 
    *qntdRes = 0;

    for ( i = 0; i < qntdA; i++)
    {
        if (pesquisar(conjB, qntdB, conjA[i]) == -1){

            conjRes[*qntdRes] = conjA[i]; 
            (*qntdRes)++;  

        }
    }

    printf("Conjunto resultado: ");
    listar(conjRes, *qntdRes);
    
}

//----------------DIFERENÇA SIMÉTRICA------------------//

void diferencaST(int *conjA, int qntdA, int *conjB, int qntdB, int *conjRes, int *qntdRes){

    int i; 
    *qntdRes = 0;

    for ( i = 0; i < qntdA; i++)
    {
        if (pesquisar(conjB, qntdB, conjA[i]) == -1){

            conjRes[*qntdRes] = conjA[i]; 
            (*qntdRes)++;  

        }
    }

    for ( i = 0; i < qntdB; i++)
    {
        if (pesquisar(conjA, qntdA, conjB[i]) == -1){

            conjRes[*qntdRes] = conjB[i]; 
            (*qntdRes)++;  

        }
    }

    printf("Conjunto resultado: ");
    listar(conjRes, *qntdRes);

}

//----------------PROGRAMA PRINCIPAL------------------//

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
                uniao(conjA, qntdA, conjB, qntdB, conjRes, &qntdRes);
                break;
            case 2:
                printf("\n\nInterseção de A e B: ");
                intersecao(conjA, qntdA, conjB, qntdB, conjRes, &qntdRes);
                break;
            case 3:
                printf("\n\nDiferença de A - B: ");
                diferencaAB(conjA, qntdA, conjB, qntdB, conjRes, &qntdRes);
                break;
            case 4:
                printf("\n\nDiferença de B - A: ");
                diferencaBA(conjA, qntdA, conjB, qntdB, conjRes, &qntdRes);
                break;
            case 5:
                printf("\n\nDiferença Simétrica de A ∆ B: ");
                diferencaST(conjA, qntdA, conjB, qntdB, conjRes, &qntdRes);
                break;
            default:
                printf("\n\nOpção inválida! Tente novamente.");

        }

    } while (opcao != 0);

    return 0;
}