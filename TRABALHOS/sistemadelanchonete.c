#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#define MAXSTR 1000
#define MAXPED 100

//Aluna: Nathália de Oliveira Milanezi
//Sistema de Lanchonete

//STRUCT PEDIDO

struct Lanche{
    char nomeLanche[MAXSTR];
    float preco;
    char ingredientes[MAXSTR];
};

typedef struct Lanche Lanche;

struct Pedido{
    int numPed;
    char nomeClie[MAXSTR];
    int qntdDlc;
    Lanche lanche;
};

typedef struct Pedido Pedido;

//LIMPAR BUFFER

void limparBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

//LER NOME DO CLIENTE

void lerNomeC(Pedido *n, int *qntdNc){

    printf("Digite o nome do cliente: ");
    fgets(n->nomeClie, MAXSTR, stdin);

    *qntdNc = strlen(n->nomeClie) - 1; //espaço do /n

}

//LER NOME DO LANCHE

void lerNomeLc(Lanche *nl, int *qntdNlc){

    printf("Digite o nome do lanche: ");
    fgets(nl->nomeLanche, MAXSTR, stdin);

    *qntdNlc = strlen(nl->nomeLanche) - 1; //espaço do /n

}

//LER PEDIDO

void lerPedido(Lanche *ing, int *qntdLc, Pedido *p){

    char cont;
    char temp[MAXSTR];

    ing->ingredientes[0] = '\0';

    do{

        printf("Digite os ingredientes que você deseja no seu lanche: ");
        fgets(temp, MAXSTR, stdin);
        temp[strlen(temp) - 1] = '\0';

        if (ing->ingredientes[0] != '\0'){
            strcat(ing->ingredientes, ", ");
        }
        strcat(ing->ingredientes, temp);

        *qntdLc = strlen(ing->ingredientes);

        printf("Deseja continuar (S/N)? ");
        scanf(" %c", &cont);
        cont = toupper(cont);
        limparBuffer();

        while (cont != 'S' && cont != 'N'){

            printf("Opção inválida!\n");
            printf("Deseja continuar (S/N)? ");
            scanf(" %c", &cont);
            cont = toupper(cont);
            limparBuffer();

        }

    }while(cont == 'S');

    printf("Digite a quantidade de lanche que você deseja: ");
    scanf("%d", &p->qntdDlc);
    limparBuffer();

    printf("Preço fixo: R$20,00\n");
    ing->preco = 20.00;
    printf("Total: R$%.2f\n", p->qntdDlc * ing->preco);

    printf("Digite o número do pedido: ");
    scanf("%d", &p->numPed);
    limparBuffer();

}

//FUNÇÃO PARA IMPRIMIR

void imprimir(Pedido *vetor, int qntde){
    int i;
    for (i = 0; i < qntde; i++){

        printf("\nNúmero do pedido: %d\n", vetor[i].numPed);
        printf("Cliente: %s\n", vetor[i].nomeClie);
        printf("Lanche: %s\n", vetor[i].lanche.nomeLanche);
        printf("Ingredientes: %s\n", vetor[i].lanche.ingredientes);
        printf("Preço: R$%.2f\n", vetor[i].lanche.preco);
        printf("Quantidade: %d\n", vetor[i].qntdDlc);
        printf("Valor total: R$%.2f\n", vetor[i].qntdDlc * vetor[i].lanche.preco);
    }

}

//FUNÇÃO PESQUISAR

int pesquisar(Pedido *vetor, int qntde, int pesq){

    int i;

    for (i = 0; i < qntde; i++){
        if (vetor[i].numPed == pesq){
            return i;
        }
    }

    return -1;

}

//PESQUISAR POR NÚMERO

void pesquisarNum(Pedido *vetor, int qntde){

    int num, pos;

    printf("Digite o número do pedido: ");
    scanf("%d", &num);
    limparBuffer();

    pos = pesquisar(vetor, qntde, num);

    if (pos == -1){

        printf("Pedido não encontrado!\n");

    }else{

        imprimir(&vetor[pos], 1);
    }
}

//PESQUISAR POR NOME

void pesquisarNome(Pedido *vetor, int qntde){

    char nome[MAXSTR];
    int i;
    int cont = 0;

    printf("Digite o nome do cliente: ");
    fgets(nome, MAXSTR, stdin);

    for (i = 0; i < qntde; i++){

        if (strcmp(vetor[i].nomeClie, nome) == 0){
            imprimir(&vetor[i], 1);
            cont++;
        }
    }

    if (cont == 0){
        printf("Nenhum pedido encontrado para esse cliente!\n");
    }else{
        printf("\n%d pedido(s) encontrado(s).\n", cont);
    }

}

//FUNÇÃO DE REMOVER

void remover(Pedido *vetor, int *qntde, int pos){

    int i;

    for  (i = pos; i < *qntde - 1 ; i++){

        vetor[i] = vetor[i + 1];
    }

    (*qntde)--;
}

//ATUALIZAR QUANTIDADE

void atualizarqnt(Pedido *vetor, int qntde){

    int num, pos, nova;

    printf("Digite o número do pedido: ");
    scanf("%d", &num);
    limparBuffer();

    pos = pesquisar(vetor, qntde, num);

    if (pos == -1){

        printf("Pedido não encontrado!\n");

    }else{

        printf("Digite a nova quantidade: ");
        scanf("%d", &nova);
        limparBuffer();

        vetor[pos].qntdDlc = nova;
        printf("Quantidade atualizada!\n");
    }

}

//MAIOR VALOR

void maiorValor(Pedido *vetor, int qntde){

    int i, maior = 0;

    if (qntde == 0){

        printf("Nenhum pedido cadastrado!\n");

    }else{

        for (i = 1; i < qntde; i++){
            if (vetor[i].qntdDlc * vetor[i].lanche.preco >
                vetor[maior].qntdDlc * vetor[maior].lanche.preco){
                maior = i;
            }
        }

        imprimir(&vetor[maior], 1);

    }

}

//EXCLUIR PEDIDO

void excluirPedido(Pedido *vetor, int *qntde){

    int num, pos;

    printf("Digite o número do pedido: ");
    scanf("%d", &num);
    limparBuffer();

    pos = pesquisar(vetor, *qntde, num);

    if (pos == -1){

        printf("Pedido não encontrado!\n");

    }else{

        remover(vetor, qntde, pos);
        printf("Pedido excluído!\n");
    }
}

//LISTAR

void listar(Pedido *vetor, int qntde){

    if (qntde == 0){

        printf("Nenhum pedido cadastrado!\n");

    }else{

        imprimir(vetor, qntde);
    }
}

//MENU

int menu() {
	int op;
	system("@cls||clear");  // LIMPA A TELA
	printf("\n\nSISTEMA DE LANCHONETE\n\n");
	printf("1 - Inserir pedido\n");
	printf("2 - Pesquisar por número do pedido\n");
	printf("3 - Pesquisar por nome\n");
	printf("4 - Atualizar quantidade\n");
	printf("5 - Maior valor\n");
	printf("6 - Excluir pedido\n");
	printf("7 - Listar\n");
	printf("0 - Sair\n");
	do {
		printf("Escolha sua opção: ");
		scanf(" %d", &op);
		limparBuffer();
	} while(op < 0 || op > 7);
	return op;
}

int main() {

    setlocale(LC_ALL, "Portuguese");

	int op;

    Pedido pedidos[MAXPED];
    int qtd = 0;

    int qntdNc, qntdLc, qntdNlc;

	do {
		op = menu();
		switch ( op ) {
			case 0:
				//SAIR
				break;
			case 1:
				// INSERIR PEDIDO
                if (qtd == MAXPED){
                    printf("Limite de pedidos atingido!\n");
                    break;
                }

                lerNomeC(&pedidos[qtd], &qntdNc);
                lerNomeLc(&pedidos[qtd].lanche, &qntdNlc);
                lerPedido(&pedidos[qtd].lanche, &qntdLc, &pedidos[qtd]);

                if (pesquisar(pedidos, qtd, pedidos[qtd].numPed) != -1){
                    printf("Já existe um pedido com esse número!\n");
                }else{
                    qtd++;
                }

				break;
			case 2:
				pesquisarNum(pedidos, qtd);
				break;
			case 3:
				pesquisarNome(pedidos, qtd);
				break;
			case 4:
				atualizarqnt(pedidos, qtd);
				break;
			case 5:
				maiorValor(pedidos, qtd);
				break;
			case 6:
				excluirPedido(pedidos, &qtd);
				break;
			case 7:
				listar(pedidos, qtd);
				break;
			default:
				printf ("\n\nOpção inválida!\n\n");
		}

		system("PAUSE");  // Windows
	} while (op != 0);

	return 0;
}