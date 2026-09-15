#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // acentuação
#include <math.h>
#include <time.h> 
#define MAX 101 

//----------------PREENCHER------------------//

void encherVetor( int *vetor, int qntd){

    int i = 0;
    int min = 1;
    int max = 1000; 
   
    for ( i = 0; i < qntd; i++){

        vetor[i] = min + rand() % (max - min + 1); 
    }
    
}

//----------------IMPRIMIR------------------//

void imprimir(int *vetor, int qntd){

    int i; 

    for (i = 0; i < qntd; i++)
    {
        printf("%d\n", vetor[i]);
    }

}

//----------------PEQUISAR------------------//

int pesquisar(int *vetor1, int qntd,  int pesq){

    int i; 

    // vetor -> onde vou procurar (só um vetor, não dois)
    // qntd -> quantos elementos esse vetor tem
    // pesq -> O NÚmero que estou procurando lá dentro

    for (i = 0; i < qntd; i++){

        if(vetor1[i] == pesq){

            return i; // achei o número procurado nessa posição
                      // devolve a posição onde achou 
        }

    }
    return -1; // percorreu tudo e não achou -> retorna -1 
}

//----------------REMOVER------------------//

void remover (int *vetor, int *qntd, int pos){

    // vetor -> de qual vetor vou remover um elemento
    // qntd -> ponteiro pro tamanho desse vetor (precisa mudar o valor original, por isso é ponteiro)
    // pos -> a posição que eu quero remover

    int i; 

    for ( i = pos; i < *qntd - 1; i++){

        vetor[i] = vetor[i + 1]; // "empurra" cada elemento uma posição pra trás 
    }
    (*qntd)--; // diminui o tamanho efeitivo do vetor em 1

}

//----------------PROGRAMA PRINCIPAL------------------//

int main(){ 
    
    SetConsoleOutputCP(65001); 
    srand(time(NULL));
    
    int  vetor1[MAX], vetor2[MAX], removidos[MAX]; 
    // <-- vetor "removido" para guardar os números removidos

    int qntdRemovidos = 0;   // <-- contador de quantos foram removidos
    int qntd1 = 100;
    int qntd2 = 100;  // <-- precisa separar os tamanhos, pois o vetor2 vai DIMINUIR

    int cont, pos;

    encherVetor(vetor1, qntd1);
    encherVetor(vetor2, qntd2); 
   
    printf("#--------------VETOR 1--------------#\n");
    imprimir(vetor1, qntd1); 

    printf("\n\n#--------------VETOR 2--------------#\n");
    imprimir(vetor2, qntd2); 
    
    // agora: percorrer o vetor2, um elemento de cada vez
    cont = 0; 

    while (cont < qntd2){

        // pergunta para 'pesquisar': "o número vetor2[cont] existe dentro do vetor1?"
        // -vetor1 -> ONDE procurar
        // -qntd1 -> tamanho do vetor1
        // -vetor2[cont] -> O QUE procurar (um elemento específico do vetor2)

        pos = pesquisar(vetor1, qntd1, vetor2[cont]);

        if (pos != -1){

            //achou! esse número está nos dois vetores
            //1°: guarda ele na lista de removidos
            removidos[qntdRemovidos] = vetor2[cont];
            qntdRemovidos++; 

            // 2°: remove ele do vetor2 (isso desloca os elementos e diminui qntd2)
            remover(vetor2, &qntd2, cont); 

            // IMPORTANTE: não faço cont++ aqui, porque a posição cont agora tem um elemento NOVO que ainda não foi checado. 

        }else{

            // não achou -> esse elemento fica no vetor2, passa pro próximo
            cont++; 

        }

    }
    
    printf("\n\n#--------------VETOR 1 - DEPOIS--------------#\n");
    imprimir(vetor1, qntd1); 

    printf("\n\n#--------------VETOR 2 - DEPOIS--------------#\n");
    imprimir(vetor2, qntd2); 
    
    printf("\n\n#--------------VETOR REMOVIDO - DEPOIS--------------#\n");
    imprimir(removidos, qntdRemovidos); 

    return 0; 
}