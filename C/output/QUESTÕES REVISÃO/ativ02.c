#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>
#include <time.h> 
#define MAX 100

//----------------LER PREÇO------------------//

float lerPreco(){

    float preco; 

    do
    {
        printf("Digite o valor do produto: ");
        scanf("%f", &preco);

    } while (preco < 0);
    
    return preco; 
}


//----------------PAGAMENTO------------------//

float pagamento( float preco){

    int op;
    float valor; 
    
    printf("Digite a sua forma de pagamento: \n");
    printf("1- à vista\n");
    printf("2- à prazo\n");
    scanf("%d", &op); 

    switch (op)
    {
    case 1:
        
        valor = preco - (preco * 0.05);
        break;
    
    default:
        
        valor = preco + (preco * 0.05);
        break;
    }

    return valor; 
}

//----------------PROGRAMA PRINCIPAL------------------//

int main(){ 
    
    SetConsoleOutputCP(65001); 
    
    float preco, valor; 
    
    preco = lerPreco();
    valor = pagamento(preco);  

    printf("O valor do seu produto é: R$%.2f", valor); 
    return 0; 

}