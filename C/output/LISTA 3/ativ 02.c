#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

int main()
{ 
    int cont, multi;
    cont = 1; 

    SetConsoleOutputCP(65001);

    while (cont <= 300)
    {
        multi = cont * 5; 
        printf("%d\n", multi); 
        cont = cont + 1; 
    }
    
    return 0; 

}