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

#----CONDIÇÃO----#

def condicao(soma1, valorInicial, valorApostado):

    valorTotal = valorInicial - valorApostado

    if soma1 == 11 or soma1 == 7:        
        
        valorTotal = (valorApostado * 2) + valorTotal
        print("Parábens você ganhou!")
        print("Valor final: R$ %.2f" %valorTotal)
        return "ganhou", valorTotal
        
    elif soma1 == 2 or soma1 == 3 or soma1 == 12:
        
        valorTotal = valorTotal
        print("Você perdeu, que pena! CRAPS")
        print("Valor final: R$ %.2f" %valorTotal)
        return "perdeu", valorTotal
        
    else:    
            
        print(" %d esse é o seu ponto! Tire-o novamente para ganhar" %soma1)
        return "ponto", valorTotal
    
#----DESEJA CONTINUAR----#

def continuar():

    continuar = input("Deseja continuar? (s/n): ").upper()

    while continuar != "S" and  continuar != "N":

        print("Caractere inválido!")
        continuar = input("Deseja continuar? (s/n): ").upper()

    if continuar == "S":
        return True
        
    elif continuar == "N":
        return False
    

       
#---------------------------------PROGRAMA PRINCIPAL---------------------------------#
valorInicial = 100

print("Olá, seja bem vindo! você possui 100 reais para apostar")

while True:

    valorApostado = float(input("Digite o quanto você deseja apostar: "))

    soma1 = jogarDado1()

    resultado, valorTotal = condicao(soma1, valorInicial, valorApostado)

    if resultado != "ponto":
        print("Fim de jogo!")
        
        if not continuar():
            break;
        
        valorInicial = valorTotal

    else:

        while True:

            soma2 = jogarDado2()
            print(soma2)

            if soma2 == 7:
                
                valorTotal = valorTotal
                print("Sinto muito, mas você perdeu")
                print("Valor final: R$ %.2f" %valorTotal)
                break;
    
            elif soma2 == soma1:
                
                valorTotal = (valorApostado * 2) + valorTotal
                print("Párabens! Você ganhou!")
                print("Valor final: R$ %.2f" %valorTotal)
                break;
 
        if not continuar(): #se eu quiser continuar ele vai eler "ele nao deseja nao parar"
            break;
     
    valorInicial = valorTotal
      