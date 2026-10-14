#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>
#include <string.h>
#include <time.h> 
#define MAXSTR 9999 

//----------------STRUCT PONTO------------------//

struct Ponto {

    int x; 
    int y; 
    char cor[20]; 

};

typedef struct Ponto Ponto; 

//----------------LER PONTO------------------//

void lerPonto(Ponto *p){

    printf("Digite o ponto X: ");
    scanf("%d", &p->x); 

    printf("Digite o ponto Y: "); 
    scanf("%d", &p->y);
    
}

//----------------LER COR------------------//

void lerCor(Ponto *p){

    printf("Digite a cor: ");
    scanf("%19s", p->cor); 
}

//----------------IMPRIMIR------------------//

void imprimir(Ponto *p){

    printf("Ponto X: %d\n", p->x);
    printf("Ponto Y: %d\n", p->y);
    printf("Cor: %s\n", p->cor);

}


//----------------PROGRAMA PRINCIPAL------------------//

int main(){ 
    
    SetConsoleOutputCP(65001);
    
    Ponto pont; 

    lerPonto(&pont); 
    lerCor(&pont);
    imprimir(&pont);  

    return 0; 
}