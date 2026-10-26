#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#define MAXSTR 50

struct Ponto {
  float x;
  float y;
  char cor[MAXSTR];
};

typedef struct Ponto Ponto;

//Limpar Buffer
void limparBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}


// Ler Ponto
void lerPonto(Ponto *pt){

  printf("Digite o valor do ponto x: ");
  scanf("%f", &pt->x);

  printf("Digite o valor do ponto y: ");
  scanf("%f", &pt->y);
  limparBuffer();
}

//Ler Cor

void lerCor(Ponto *pt, int *qntdC){

  printf("Digite a cor: ");
  fgets(pt->cor, MAXSTR, stdin);

  *qntdC = strlen(pt->cor);
  pt->cor[*qntdC - 1] = '\0';

}

//Mostrar Ponto
void mostrarPonto(Ponto *pt){

printf("Ponto 1: (%.2f, %.2f) - Cor: %s", pt->x, pt->y, pt->cor);
}

//Programa Principal
int main(){

  Ponto pt;
  int qntdC;

  lerPonto(&pt);
  lerCor(&pt, &qntdC);

  mostrarPonto(&pt);

  return 0;
}