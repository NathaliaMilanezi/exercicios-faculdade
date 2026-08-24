#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

//------------------VALIDAÇÃO DA NOTA------------------//

float lerNota( int cont){

    float nt; 

    do{
        printf("Digite sua %d° nota: ", cont + 1);
        scanf("%f", &nt);

    }while (nt <= 0 || nt > 10);

    return nt; 
}

//------------------LER AS TRÊS NOTAS------------------//

float ler3notas (int cont){

    float somaNotas, nt;
    somaNotas = 0;  

    while (cont < 3)
    {
        nt = lerNota(cont); 
        cont = cont + 1; 
        somaNotas = somaNotas + nt; 
    }
    
    return somaNotas; 

}

//------------------CALCULAR A MÉDIA E IMPRIMIR A MENSAGEM------------------//

float calcMedia (float somarNotas){

    float media; 
    media = somarNotas / 3; 

    if (media >= 7){

        printf("Média final: %.2f\n", media); 
        printf("Aprovado");

    }else if (media < 6){   

        printf("Média final: %.2f\n", media);  
        printf("Reprovado");

    }else if(media >= 6 && media < 7){

        printf("Média final: %.2f\n", media);  
        printf("Prova Final"); 
    }
    
    return media; 
}

//------------------LER E VÁLIDAR A MATRÍCULA------------------// 

float lerMat(){

    int matricula; 

    do{
        printf("Digite sua matrícula: ");
        scanf("%d", &matricula);

    }while (matricula <= 0);

    return matricula; 
}

//------------------PROGRAMA PRINCIPAL------------------//

int main()
{ 
    SetConsoleOutputCP(65001); 


    float somarNotas;
    int matricula, cont; 
    cont = 0; 

    printf("Olá, seja bem vindo ao sistema de cálculo de média de alunos\n"); 

    matricula = lerMat();
    printf("Aluno %d\n", matricula);

    somarNotas = ler3notas(cont); 
    calcMedia(somarNotas);

    return 0; 
}