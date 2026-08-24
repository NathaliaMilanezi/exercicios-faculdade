#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

int main()
{ 
    int cont;
    cont = 100; 

    SetConsoleOutputCP(65001);

    while (cont >= 1)
    {
        printf("%d\n", cont); 
        cont = cont - 1; 
    }
    
    return 0; 

}