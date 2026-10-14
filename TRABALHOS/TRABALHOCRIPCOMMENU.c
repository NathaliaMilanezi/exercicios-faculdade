#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>
#include <string.h>
#include <time.h> 
#define MAXSTR 9999 

//ALUNA: NATHÁLIA DE OLIVEIRA MILANEZI - V04

//----------------LIMPAR BUFFER------------------//

void limparBuffer(){
    int c; 
    while ((c = getchar()) != '\n' && c != EOF);  
}

//----------------MENU------------------//

int menu() {
        int op;

        printf("\n\n----- MENU -----");
        printf("\n\n0 - Sair");
        printf("\n\n1 - Criptografar");
        printf("\n2 - Descriptografar");

        printf("\n\nInsira a opcao equivalente a operaco que deseja realizar: ");
        scanf("%d", &op);
        limparBuffer(); 

        return op;
}


//----------------LER VETOR------------------//

void lerVetor(char senha[], int *qntdS){

    fgets(senha, MAXSTR, stdin);

    *qntdS = strlen(senha) - 1; //espaço do /n

}

//----------------ETAPA 1------------------//

void etapa1(char senha[]){

    int i = 0; 

    while (senha[i] != '\0'){

        if (senha[i] == 'a')
        {
            senha[i] = '@';

        }else if(senha[i] == 'e'){

            senha[i] = '&'; 

        }else if(senha[i] == 'i'){

            senha[i] = '$'; 

        }else if (senha[i] == 'o'){

            senha[i] = '*'; 

        }else if(senha[i] == 'u'){

            senha[i] = '#'; 

        }else if(senha[i] == '@'){

            senha[i] = 'a';

        }else if(senha[i] == '&'){

            senha[i] = 'e'; 

        }else if(senha[i] == '$'){

            senha[i] = 'i'; 

        }else if (senha[i] == '*'){

            senha[i] = 'o';

        }else if(senha[i] == '#'){

            senha[i] = 'u';

        }
        
        i++; 
    }
    
    //printf("%s", senha); 

}

//----------------ETAPA 2------------------//

void etapa2(char senha[], int qntdS, char par[], int *qntdP, char impar[], int *qntdI){

    int i;
    int cp = 0; 
    int ci = 0; 
    char guardar; 

    for ( i = 0; i < qntdS; i++)
    {
        if (i % 2 == 0){

            par[cp] = senha[i]; 
            cp++; 
            (*qntdP)++; 

        }else{

            impar[ci] = senha[i]; 
            ci++;
            (*qntdI)++; 
        }
        
    }

    //inverter a ordem da string impar 
    impar[ci] = '\0';
    par[cp] = '\0'; 

    ci = *qntdI - 1;

    
    for ( i = 0; i < ci; i++)
    {
        guardar = impar[i]; //guarda o valor original do impar[i]
        impar[i] = impar[ci]; //agora pode mudar o valor 
        impar[ci] = guardar; 
        ci--;
    }
    
    //printf("string par: %s\nquantidade: %d\n", par, *qntdP);
    //printf("string impar: %s\nquantidade: %d\n", impar, *qntdI);

}

//----------------ETAPA 3------------------//

void etapa3(char resultado[], int qntdS, char par[], int qntdP, char impar[], int qntdI){

    int i = 0;
    int p = 0; 
    int r = 0; 

    while (r < qntdS)
    {
        if((r % 2 == 0) && (p < qntdP)){

            resultado[r] = par[p]; 
            p++;
            r++; 
        }

        if ((r % 2 != 0) && (i < qntdI))
        {
            resultado[r] = impar[i]; 
            i++;
            r++; 
        }
        
    }
    
    resultado[r] = '\0';
    
    printf("Resultado da mensagem: %s", resultado);  

}

//----------------PROGRAMA PRINCIPAL------------------//

int main(){ 
    
    char senha[MAXSTR], par[MAXSTR], impar[MAXSTR], resultado [MAXSTR];
    int qntdS = 0, qntdP, qntdI, op; 
    
    do
    {
        op = menu(); 

        if (op == 1){

            qntdI = 0; 
            qntdP = 0; 
            printf("Digite a mensagem que voce deseja criptografar: "); 
            lerVetor(senha, &qntdS);
            etapa1(senha); 
            etapa2(senha, qntdS, par, &qntdP, impar, &qntdI); 
            etapa3(resultado, qntdS, par, qntdP, impar, qntdI); 

        }else if (op == 2){
            
            
            qntdI = 0; 
            qntdP = 0; 
            printf("Digite a mensagem que voce deseja descriptografar: "); 
            lerVetor(senha, &qntdS);
            etapa1(senha); 
            etapa2(senha, qntdS, par, &qntdP, impar, &qntdI); 
            etapa3(resultado, qntdS, par, qntdP, impar, qntdI); 
    }
    } while (op != 0);
    
    //lerVetor(senha, &qntdS); 
    //etapa1(senha); 
    //etapa2(senha, qntdS, par, &qntdP, impar, &qntdI); 
    //etapa3(resultado, qntdS, par, qntdP, impar, qntdI); 

    return 0; 
}
