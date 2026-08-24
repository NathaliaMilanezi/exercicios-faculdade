
#include <stdio.h>

char sexo;
int numero, matricula;
float saldo;

int main(int argc, char const *argv[])

{   

    //numero = 10;
    //matricula = 123; 
    //saldo = 10.75;
    
    //as variáveis devem ser declaradas fora do main e além disso precisamos colocar print para definir o que vamos 
    //escanear (pedir para o usuário do programa)

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Digite sua matricula: ");
    scanf("%d", &matricula); 

    printf("Digite seu saldo: "); 
    scanf("%f", &saldo);

    printf("Digite seu sexo: ");
    scanf(" %c", &sexo); 
    
    // é necessário ter o espaçamento antes da variavel char por conta da tecla enter 
    
    printf("Numero: %d - matricula %d - saldo: %.2f - sexo: %c", numero, matricula, saldo, sexo);

    return 0;

}