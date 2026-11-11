#include <stdio.h>
#include <stdlib.h>


struct Motor
{
    float custo;
    float lucro;
};


int main()
{
    FILE *producao;
    FILE *custos;
    FILE *resultado;

    struct Motor M1;
    struct Motor M2;

    int quantidadeM1;
    int quantidadeM2;

    float custoTotal;
    float lucroTotal;
    float receita;

    int i;


    producao = fopen("ex2_producao.txt", "r");
    custos = fopen("ex2_vendas.txt", "r");
    resultado = fopen("ex2_resultado.txt", "w");


    if(producao == NULL || custos == NULL || resultado == NULL)
    {
        printf("Erro ao abrir arquivo!");
        return 1;
    }


    // Lendo custo e lucro dos motores
    fscanf(custos, "%f %f", &M1.custo, &M1.lucro);
    fscanf(custos, "%f %f", &M2.custo, &M2.lucro);


    for(i = 0; i < 12; i++)
    {
        fscanf(producao, "%d %d", &quantidadeM1, &quantidadeM2);


        custoTotal = (quantidadeM1 * M1.custo) +
                     (quantidadeM2 * M2.custo);


        lucroTotal = (quantidadeM1 * M1.lucro) +
                     (quantidadeM2 * M2.lucro);


        receita = lucroTotal - custoTotal;


        fprintf(resultado, "%.2f %.2f %.2f\n",
                custoTotal,
                lucroTotal,
                receita);
    }


    fclose(producao);
    fclose(custos);
    fclose(resultado);


    printf("Arquivo criado com sucesso!");

    return 0;
}