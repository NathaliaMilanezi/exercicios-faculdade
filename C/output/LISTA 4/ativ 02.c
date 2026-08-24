#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

//------------------VALIDAÇÃO DO PREÇO------------------//

float preco(){

    float valor; 

    do{
        printf("Digite o valor do pruduto: ");
        scanf("%f", &valor); 
    }while (valor < 0);

    return valor; 
}

//------------------FORMA DE PAGAMENTO------------------//

int formaP(){

    int forma; 

    do{ 

        printf("Digite a opção da forma de pagamento: \n"); 
        printf("1- À vista\n");
        printf("2- À prazo\n");
        printf("Opção: \n");
        scanf("%d", &forma); 

    }while ((forma != 1) && (forma != 2)); 

    return forma; 
}

//------------------CÁLCULO------------------//

float calcV( int pag, float preco){

    int qnt;
    float valor; 

    do
    {
        printf("Digite a quantidade que você deseja: "); 
        scanf("%d", &qnt); 

    } while (qnt < 0);
    

    if (pag == 1){

        valor = preco * qnt - (preco * qnt * 0.1); 

    }else{ 

        valor = preco * qnt + (preco * qnt * 0.1);

    }

    return valor; 
}

//------------------PROGRAMA PRINCIPAL------------------//

int main()
{ 
    SetConsoleOutputCP(65001); 

    float valor, total; 
    int pag; 

    valor = preco();
    pag = formaP(); 
    total = calcV(pag, valor); 

    printf("Valor total da compra: R$%.2f", total); 

    return 0; 
}