#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>
#include <time.h> 
#define MAX 100

//----------------LER PREÇO------------------//

int lerPreco(){

    int saque; 

    do
    {
        printf("Digite o valor do saque: ");
        scanf("%d", &saque);

    } while (saque < 0);
    
    return saque; 
}


//----------------PAGAMENTO------------------//

void notasDinheiro( int saque){

    int nota1, nota5, nota10, nota50, nota100; 

    nota100 = saque / 100;
    saque = saque % 100; 

    nota50 = saque / 50;
    saque = saque % 50; 

    nota10 = saque / 10;
    saque = saque % 10; 

    nota5 = saque / 5;
    saque = saque % 5; 

    nota1 = saque / 1;
    saque = saque % 1; 

    printf("Notas de 100: %d\n", nota100);
    printf("Notas de 50: %d\n", nota50);
    printf("Notas de 10: %d\n", nota10); 
    printf("Notas de 5: %d\n", nota5); 
    printf("Notas de 1: %d\n", nota1); 
 
}

//----------------PROGRAMA PRINCIPAL------------------//

int main(){ 
    
    SetConsoleOutputCP(65001); 
    
    int saque; 
    
    saque = lerPreco();
    notasDinheiro(saque);  

    return 0; 

}