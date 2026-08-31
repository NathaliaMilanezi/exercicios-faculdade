import random

#-----GERAR O NUM ALEATÓRIO-----#

def gerarNumAleatorio(min, max):

    return random.randint(min,max)


#-----PROGRAMA PRINCIPAL-----#

def main():

    vetorNum1 = []
    vetorNum2 = []
    vetorNum3 = []
    min = 1
    max = 100
    cont = 0 
    
    while cont < 10:

        vetorNum1.append(gerarNumAleatorio(min, max))
        vetorNum3.append(vetorNum1[cont])

        vetorNum2.append(gerarNumAleatorio(min, max))
        vetorNum3.append(vetorNum2[cont])
        cont = cont + 1


    print(vetorNum1)
    print(vetorNum2)
    print(vetorNum3)

main()