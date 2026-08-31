
import random

#----LANÇAR OS DADOS----#

def lancarDado():

    return random.randint (1,6)

#----JOGAR OS DADOS----#

def jogarDado1():

    input("Pressione ENTER para lançar os dados.")

    d1 = lancarDado()
    d2 = lancarDado()

    soma1 = d1 + d2

    print("Dado 1: %d" %d1)
    print("Dado 2: %d" %d2)
    print("Soma = %d" %soma1)

    print("---------------------")

    return soma1

def jogarDado2():

    input("Pressione ENTER para lançar os dados.")

    d1 = lancarDado()
    d2 = lancarDado()

    soma2 = d1 + d2

    print("Dado 1: %d" %d1)
    print("Dado 2: %d" %d2)
    print("Soma = %d" %soma2)

    print("---------------------")

    return soma2

#----CONDIÇÕES----#

def condicao(soma1):

    if soma1 == 11 or soma1 == 7:        
        print("Parábens você ganhou!")
        return "ganhou"
        
    elif soma1 == 2 or soma1 == 3 or soma1 == 12:
            
        print("Você perdeu, que pena! CRAPS")
        return "perdeu"
        
    else:    
            
        print(" %d esse é o seu ponto! Tire-o novamente para ganhar" %soma1)
        return "ponto"
        
    
    
#---------------------------------PROGRAMA PRINCIPAL---------------------------------#

soma1 = jogarDado1()

resultado = condicao(soma1)

if resultado != "ponto":
    print("Fim de jogo!")

else:
    soma2 = jogarDado2()

    while soma1 != soma2:

        soma2 = jogarDado2()
        print(soma2)

        if soma2 == 7:

            print("Sinto muito, mas você perdeu")
            break
    
        elif soma2 == soma1:

            print("Párabens! Você ganhou!")

