#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

int main(int argc, char const *argv[])
{ 
    float n1, total; 

    SetConsoleOutputCP(65001);

    printf("Digite um número: "); 
    scanf("%f", &n1);
 

    if (n1 >= 0){
        total = sqrt(n1); 
        printf("Total: %.2f", total);

    }else{
        total = pow(n1,2); 
        printf("Total: %.2f", total);
        
    }

    return 0; 

}