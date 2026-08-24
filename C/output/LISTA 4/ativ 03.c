#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação

#define _USE_MATH_DEFINES
#include <math.h>
//----------------LER A OPÇÃO------------------//

int lerOpcao(){

    int op;

    do
    {
        printf("\n\nCALCULAR A ÁREA:\n");
        printf("1-Retângulo\n");
        printf("2-Círculo\n");
        printf("0-Sair\n");
        printf("Informe sua opção: ");
        scanf("%d", &op);
        
    } while (op != 0 && op != 1 && op != 2);
    
    return op;

}

//----------------LER DADOS------------------//

float lerDados(){
    
    float num;

    do
    {
        printf("Digite o valor da base: ");
        scanf("%f", &num); 
    } while (num < 0);

    return num; 

}

//----------------CALCULAR ÁREA RETÂNGULO------------------//

float calcR(float base, float altura){

    float area;

    area = base * altura;
    return area; 

}

//----------------CALCULAR ÁREA DO CÍRCULO------------------//

float calcC(float raio){

    float area;

    area = M_PI * pow(raio,2);
    return area; 

}

//----------------PROGRAMA PRINCIPAL------------------//

int main()
{ 
    SetConsoleOutputCP(65001); 
    
    int opcao; 
    float base, altura, raio, area;

    do{
        opcao = lerOpcao();
        switch (opcao)
        {
        case 1:
            
            base = lerDados();
            altura = lerDados();
            area = calcR(base, altura); 
            printf("Área do retângulo: %.2f", area);
            break;

        case 2:

            raio = lerDados();
            area = calcC(raio);
            printf("Área do círculo: %.2f", area);
            break;
                    
        default:
            break;
        }


    }while(opcao > 0);

    return 0; 
}