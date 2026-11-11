#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100


struct Aluno
{
    int matricula;
    char projeto1[50];
    char projeto2[50];
    char projeto3[50];
};


int main()
{
    FILE *arq;
    FILE *leds;
    FILE *leter;
    FILE *robotica;


    struct Aluno aluno;


    arq = fopen("ex3_alunos.txt", "r");

    leds = fopen("LEDS.txt", "w");
    leter = fopen("LETER.txt", "w");
    robotica = fopen("Robotica.txt", "w");


    if(arq == NULL || leds == NULL || leter == NULL || robotica == NULL)
    {
        printf("Erro ao abrir arquivo!");
        return 1;
    }


    while(fscanf(arq, "%d %s %s %s",
                 &aluno.matricula,
                 aluno.projeto1,
                 aluno.projeto2,
                 aluno.projeto3) != EOF)
    {


        if(strcmp(aluno.projeto1, "LEDS") == 0 ||
           strcmp(aluno.projeto2, "LEDS") == 0 ||
           strcmp(aluno.projeto3, "LEDS") == 0)
        {
            fprintf(leds, "%d\n", aluno.matricula);
        }


        if(strcmp(aluno.projeto1, "LETER") == 0 ||
           strcmp(aluno.projeto2, "LETER") == 0 ||
           strcmp(aluno.projeto3, "LETER") == 0)
        {
            fprintf(leter, "%d\n", aluno.matricula);
        }


        if(strcmp(aluno.projeto1, "Robotica") == 0 ||
           strcmp(aluno.projeto2, "Robotica") == 0 ||
           strcmp(aluno.projeto3, "Robotica") == 0)
        {
            fprintf(robotica, "%d\n", aluno.matricula);
        }

    }


    fclose(arq);
    fclose(leds);
    fclose(leter);
    fclose(robotica);


    printf("Arquivos criados com sucesso!");

    return 0;
}