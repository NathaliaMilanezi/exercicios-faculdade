
#----LER E VÁLIDAR UM NÚMERO INTEIRO E POSITIVO----#

def lerNum():

    num = input("Digite um número inteiro e positivo: ")

    while num.isdigit() == False:

        print("Número inteiro inválido!")
        num = input("Digite um número inteiro e positivo: ")
    
    return int(num)

#----LER E VÁLIDAR UM NÚMERO INTEIRO E POSITIVO----#

def imprimirNum(num):

    linha = 1

    while linha <= num:

        cont = 1

        while cont <= linha:

            print(cont, end=" ")
            cont += 1

        print()
        
        linha = linha + 1

#-------PROGRAMA PRINCIPAL-------#

num = lerNum()
imprimirNum(num)