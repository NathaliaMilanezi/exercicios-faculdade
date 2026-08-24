#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

int main(int argc, char const *argv[])
{ 
    int cigarros, anos, ct; 

    SetConsoleOutputCP(65001);

    printf("Digite a quantidade de cigarros que você fuma por dia: "); 
    scanf("%d", &cigarros);

    printf("Digite a quantos anos você fuma: "); 
    scanf("%d", &anos); 

    ct = (cigarros * 365 * anos * 10 ) /1440;
    

    printf("Você perdeu %d dias de vida", ct);

    return 0; 

}