

#----LER E VÁLIDAR UM NÚMERO INTEIRO E POSITIVO----#

def lerNumN():

    numN = input("Digite um número N inteiro e positivo: ")

    while numN.isdigit() == False:

        print("Número inteiro inválido!")
        numN = input("Digite um número N inteiro e positivo: ")
    
    return int(numN)

#----LER E VÁLIDAR UM NÚMERO INTEIRO E POSITIVO----#

def lerNumM():

    numM = input("Digite um número M inteiro e positivo: ")

    while numM.isdigit() == False:

        print("Número inteiro inválido!")
        numM = input("Digite um número M inteiro e positivo: ")
    
    return int(numM)

#----CONFIRMAR SE N É MENOR QUE M----#

def comparacao(numN, numM):

    while numN > numM: 

        print("N deve ser menor ou igual a M!")
        numN = lerNumN()
    
    return numN
    

#----CALCULAR A COMBINÇÃO----#

def combinacao():

    combMN = math.factorial(numM) / (math.factorial(numM - numN) * math.factorial(numN)) 

    return combMN
    
#---------------------------------PROGRAMA PRINCIPAL---------------------------------#

import math

numM = lerNumM()
numN = lerNumN()

comparacao(numN, numM)

combNM = combinacao()

print(combNM)


