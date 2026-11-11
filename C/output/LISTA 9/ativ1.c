#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <direct.h>

#define MAX 100


char palavrasProibidas[100][50] = { "sexo", "erótico", "golpe", "ladrão", "rapariga","rebelião", "darth", "vader","skywalker", "jedi", "flamengo"};


// função pesquisar
int pesquisar(char palavra[], char palavrasProibidas[][50])
{
    int i;

    strlwr(palavra);

    for(i = 0; i < 11; i++)
    {
        if(strcmp(palavra, palavrasProibidas[i]) == 0)
        {
            return 1;
        }
    }

    return 0;
}


// programa principal
int main()
{
    SetConsoleOutputCP(65001);

    FILE *arq;
    FILE *novo;

    int i;
    int tamanho;

    char palavra[50];


    arq = fopen("ex1_input.txt", "r");
    novo = fopen("censurado.txt", "w");


    if(arq == NULL || novo == NULL)
    {
        printf("Erro ao abrir o arquivo!");
        return 1;
    }


    while(fscanf(arq, "%s", palavra) != EOF)
    {

        if(pesquisar(palavra, palavrasProibidas))
        {
            tamanho = strlen(palavra);

            for(i = 0; i < tamanho; i++)
            {
                fprintf(novo, "*");
            }
        }
        else
        {
            fprintf(novo, "%s", palavra);
        }


        fprintf(novo, " ");
    }


    fclose(arq);
    fclose(novo);


    printf("Arquivo censurado criado!");

    return 0;
}