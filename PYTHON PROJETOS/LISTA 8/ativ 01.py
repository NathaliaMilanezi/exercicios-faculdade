import random

#-----GERAR O NUM ALEATÓRIO-----#

def gerarNumAleatorio(min, max):

    return random.randint(min, max)

#-----VETOR PAR E IMPAR-----#

def numParImpar(vetorNum):

    i = 0 
    par = []
    impar = []

    while i < len(vetorNum):

        divisao = vetorNum[i] % 2 

        if divisao == 0:

            par.append(vetorNum[i])
        else:

            impar.append(vetorNum[i])
        
        i = i + 1
    
    return par, impar

        

#-----PROGRAMA PRINCIPAL-----#

def main():

    vetorNum = []
    min = 1
    max = 100
    cont = 0 
    
    while cont < 20:

        vetorNum.append(gerarNumAleatorio(min, max))

        cont = cont + 1

    par, impar = numParImpar(vetorNum)

    print("Números pares: ", par)
    print("Números ímpares: ", impar)
    print("Todos os números: ", vetorNum)

main()