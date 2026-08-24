#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>

int main()
{
    float nota, soma, mediatotal; 
    int qntMulheres, qntHomens, qntHM ,qntDR, qntDI, qntDB, matricula;
    char sexo; 

    qntDB = 0; 
    qntDI = 0;
    qntDR = 0;
    qntHomens = 0; 
    qntMulheres = 0; 
    qntHM = 0; 
    matricula = 1; 

    SetConsoleOutputCP(65001);

    while (matricula != 0){

        do{
            
            printf("Digite sua matrícula: "); 
            scanf("%d", &matricula);
            
            if (matricula == 0) {
                break;  // Sai do loop se código for 0
            }
        }while (matricula < 0); 
        
            
        do{
            
            printf("Digite sua nota: "); 
            scanf("%f", &nota);
            
        }while (nota < 0 || nota >100); 

        soma = soma + nota; 

         do{
            
            printf("Digite seu sexo (M/F): "); 
            scanf("%c", &sexo); 
            
        }while (sexo != 'F' || sexo != 'M');

        
        if (sexo == 'F'){

            qntMulheres = qntMulheres + 1;

        }else if (sexo == 'M'){

            qntHomens = qntHomens + 1; 
        }

        if (nota <= 79 && nota >= 60){

            qntDR = qntDR + 1; 

        }else if(nota < 60){

            qntDI = qntDI + 1;

        }else{

            qntDB = qntDB + 1; 
        }
        
        qntHM = qntHM + 1; 

        mediatotal = soma / qntHM; 
    }
    
    
     
    
   

    return 0; 
}