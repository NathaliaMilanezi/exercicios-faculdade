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

struct Reta{

    Ponto pt1;
    Ponto pt2;
    char cor[20];
    float tamanho;

};

typedef struct Reta Reta; 

//Limpar buffer

void limparBuffer(){
  int c;
  while ((c = getchar()) != '\n' && c != EOF);
}

//Ler Cor

void lerCor(char cor[], int *qntd){ //não estou passando a cor como ponteiro e sim como vetor.

    printf("Digite a cor: ");
    fgets(cor, 20, stdin);

    (*qntd) = strlen(cor); 
    cor[*qntd-1] = '\0';

}

//Ler ponto

void lerPonto(Ponto *p){

    int qntdcp; 

    printf("Digite o valor do ponto x: "); 
    scanf("%f", &p->x);
    
    printf("Agora digite o valor do ponto y: ");
    scanf("%f", &p->y);
    limparBuffer();

    lerCor(p->cor, &qntdcp); 
}

//Imprimir

void imprimirPonto(Ponto *p){

    printf("Ponto x: %.2f\n", p->x);
    printf("Ponto y: %.2f\n", p->y);
    printf("Cor: %s\n", p->cor); 

}

//Tamanho da reta

void tamReta(Reta *r){

    r->tamanho = sqrt(pow(r->pt2.x - r->pt1.x, 2) + pow(r->pt2.y - r->pt1.y, 2));
}

//def Reta

void defReta(Reta *r){

    int qntC; 

    printf("Ponto 1:\n");
    lerPonto(&r->pt1);

    printf("Ponto 2:\n");
    lerPonto(&r->pt2);

    printf("Reta:\n");
    lerCor(r->cor, &qntC);
    tamReta(r); //não preciso passar todas as variáveis pois r já é um ponteiro para reta. 
    
}

//Mostrar reta

void mostrarReta(Reta *r){

    printf("Ponto 1\n: ");
    imprimirPonto(&r->pt1);

    printf("\nPonto 2\n: ");
    imprimirPonto(&r->pt2);

    printf("\nReta\n: ");
    printf("Cor: %s\n", r->cor);
    printf("Tamanho da reta: %.2f\n", r->tamanho);

}
//Programa principal
int main(){

    SetConsoleOutputCP(65001);

    Reta r; 

    defReta(&r);
    mostrarReta(&r);


}