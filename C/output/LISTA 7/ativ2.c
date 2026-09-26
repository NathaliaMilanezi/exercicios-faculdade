#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>
#include <string.h>
#include <time.h> 
#define MAXSTR 9999 

//----------------LER VETOR------------------//

void lerVetor(char vetor[], int *qntd){

    printf("Digite uma data (dd/mm/aaaa): ");
    fgets(vetor, MAXSTR, stdin);

    *qntd = strlen(vetor) - 1; //espaço do /n

}

//----------------VER SE É IGUAL------------------//

void transformar(char vetor[], int qntd){

    char dia[MAXSTR]; 
    char mes[MAXSTR]; 
    char ano[MAXSTR]; 
    
    int i = 0; //para percorrer o vetor
    int p = 0; //para ser o contador das posições do vetor

    //--PRIMEIRO SEPARAR O DIA
    
    while (vetor[i] != '/'){
        
        dia[p] = vetor[i]; 
        i++;
        p++; 
    }
    
    dia[p] = '\0'; //coloco a /0 para criar um vetor dia. 

    //--AGORA SEPARAR O MÊS 

    i++; //pula a barra e vai para a próxima posição de pesquisa
    p = 0; 
    
    while (vetor[i] != '/'){
        
        mes[p] = vetor[i];
        i++; 
        p++; 

    }
    
    mes[p] = '\0'; 

    // ano

    i++; 
    p = 0; 

    while (i < qntd)
    {
        ano[p] = vetor[i]; 
        i++;
        p++;
    }

    ano[p] = '\0'; 
    
    printf("%s/%s/%s", ano, mes, dia);


}

//----------------PROGRAMA PRINCIPAL------------------//

int main(){ 
    
    char vetor[MAXSTR];
    int qntd; 

    lerVetor(vetor, &qntd); 
    transformar(vetor, qntd); 


    return 0; 
}
