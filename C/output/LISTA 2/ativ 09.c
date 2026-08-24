#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

int main()
{ 
    float a, b, c, x1, x2, delta;  

    SetConsoleOutputCP(65001);

    printf("Digite o valor de x^2: "); 
    scanf("%f", &a); 

    printf("Digite o valor de x: ");
    scanf("%f", &b); 

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    //verificar se é uma equação de segundo grau

    if (a == 0){
        printf("O coeficiente 'a' deve ser diferente de zero.\n"); 
        return 0;
    }

    //Calculando o Delta
    delta = pow(b,2) - (4 * a * c); 

    if (delta > 0){
        x1 = (- b + sqrt(delta)) / (2 * a);
        x2 = (b + sqrt(delta)) / (2 * a); 
        
        printf("A equação possuí duas raízes distintas:\n");
        printf("%.2f\n", x1);
        printf("%.2f\n", x2);

    }else if(delta == 0){
        x1 = (- b + sqrt(delta)) / (2 * a);
        x2 = (b + sqrt(delta)) / (2 * a); 
        
        printf("A equação possuí duas raízes iguais:\n");
        printf("%.2f\n", x1);
        printf("%.2f\n", x2);
        

    }else{
        printf("Não há solução real\n");
    }

    if (a > 0 ){
        printf("Concavidade voltada para cima.\n");

    }else if (a = 0){
        printf("Não é uma equação de 2° grau.\n");

    }else{
        printf("Concavidade voltada para baixo.\n"); 
    }
    return 0; 

}