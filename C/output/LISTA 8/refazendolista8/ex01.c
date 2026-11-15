#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <direct.h>
#define MAXSTR 100

struct Ponto{

    float x;
    float y;
    char cor[20];

};

typedef struct Ponto Ponto;

//Limpar buffer

void limparBuffer(){
  int c;
  while ((c = getchar()) != '\n' && c != EOF);
}

//Ler ponto

void lerPonto(Ponto *p, int *qntdC){

     
    printf("Digite o valor do ponto x: "); 
    scanf("%f", &p->x);
    
    printf("Agora digite o valor do ponto y: ");
    scanf("%f", &p->y);
    limparBuffer();
    
    printf("Digite a cor: ");
    fgets(p->cor, 20, stdin);

    (*qntdC) = strlen(p->cor); 
    p->cor[*qntdC-1] = '\0';

}

//Imprimir

void imprimir(Ponto *p){

    printf("Ponto x: %.2f\n", p->x);
    printf("Ponto y: %.2f\n", p->y);
    printf("Cor: %s", p->cor); 

}

//Programa principal
int main(){

    SetConsoleOutputCP(65001);
    
    Ponto pt; 
    int qntC; 

    lerPonto(&pt, &qntC);
    imprimir(&pt);

}