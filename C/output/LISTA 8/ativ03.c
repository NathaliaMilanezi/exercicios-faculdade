#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAXSTR 50

struct Ponto {
  float x;
  float y;
  char cor[MAXSTR];
};

typedef struct Ponto Ponto;

struct Reta {
  Ponto pt1;
  Ponto pt2;
  char cor[MAXSTR];
};

typedef struct Reta Reta;

struct Circulo{
    Ponto centro;  
    float raio; 
    char cor[MAXSTR]; 
}; 

typedef struct Circulo Circulo; 

//----------------LIMPAR BUFFER------------------//

void limparBuffer(){
  int c;
  while ((c = getchar()) != '\n' && c != EOF);
}

//----------------LER COR------------------//

void lerCor(char cor[]){

  int n;

  printf("Digite a cor: ");
  fgets(cor, MAXSTR, stdin);

  n = strlen(cor);
  if (n > 0 && cor[n - 1] == '\n'){
    cor[n - 1] = '\0';
  }
}

//----------------PONTO------------------//

void lerPonto(Ponto *pt){

  printf("Digite o valor do ponto x: ");
  scanf("%f", &pt->x);

  printf("Digite o valor do ponto y: ");
  scanf("%f", &pt->y);
  limparBuffer();

  lerCor(pt->cor);
}

void mostrarPonto(Ponto *pt){

  printf("Ponto: (%.2f, %.2f) - Cor: %s\n", pt->x, pt->y, pt->cor);
}

//----------------RETA------------------//

void tamReta(Ponto *pt1, Ponto *pt2, float *tam){

  *tam = sqrt(pow(pt2->x - pt1->x, 2) + pow(pt2->y - pt1->y, 2));
}

void lerReta(Reta *r){

  printf("\nPonto 1:\n");
  lerPonto(&r->pt1);

  printf("\nPonto 2:\n");
  lerPonto(&r->pt2);

  printf("\nCor da reta:\n");
  lerCor(r->cor);
}

void mostrarReta(Reta *r){

  float tam;

  tamReta(&r->pt1, &r->pt2, &tam);
  printf("Tamanho da reta: %.2f - Cor: %s\n", tam, r->cor);
}

// CÍRCULO

void lerCirculo(Circulo *c){

    lerPonto(&c->centro); 
    lerCor(&c->cor); 
    
    printf("Digite o raio: ")
}

//----------------PROGRAMA PRINCIPAL------------------//

int main(){

  Reta r;
  Circulo c; 


  lerReta(&r);

  printf("\n");
  mostrarPonto(&r.pt1);
  mostrarPonto(&r.pt2);
  mostrarReta(&r);

  lerCirculo(&c.centro); 
  return 0;
}