
#----LER E VÁLIDAR UM NÚMERO INTEIRO E POSITIVO----#

def lerNum():

    num = input("Digite um número inteiro e positivo: ")

    while num.isdigit() == False:

        print("Número inteiro inválido!")
        num = input("Digite um número inteiro e positivo: ")
    
    return int(num)

#----IMPRIMIR OS NÚMEROS----#

def imprimirNum(num):

    # A LINHA SEMPRE COMEÇA DO 1

    linha = 1

    while linha <= num:

        # ELE VAI SER OS NÚMEROS

        cont = 1

        while cont <= linha:

            print(linha, end=" ")
            cont += 1

        print()
        
        linha = linha + 1

#-------PROGRAMA PRINCIPAL-------#

num = lerNum()
imprimirNum(num)