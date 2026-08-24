
#---------LER O NOME---------#

def lerVtNome():

    nome = input("Digite o nome da pessoa: ")

    while len(nome) < 3:

        print("Nome inválido!")
        nome = input("Digite o nome da pessoa: ")

    return nome

#---------LER O NÚMERO---------#

def lerVtNum():

    num = input("Digite o número de telefone: ")
 
    while num.replace("-", "", 1).isdigit() == False:

        print("Número inválido")
        num = input("Digite o número de telefone: ")

    return num

#---------GUARDAR O VETOR NOME---------#

def guardarVt(vetorNome, vetorNum):

    while True:
        
        nome = lerVtNome()
        vetorNome.append (nome)
        num = lerVtNum()
        vetorNum.append (num)

        continuar = input("Deseja continuar (S/N)?: ").upper()

        while continuar != "S" and continuar != "N":

            print("Opção inválida!")
            continuar = input("Deseja continuar (S/N)?: ").upper()

        if continuar == "N":
            return False
        


#---------IMPRIMIR OS VETORES---------#

def imprimirVtores(vetorNome, vetorNum):

    letra = input("Digite uma letra: ").upper()

    i = 0 

    while i< len(vetorNome):

        if vetorNome[i].upper().startswith(letra):

            print("%s - %s" %(vetorNome[i], vetorNum[i]))

        i = i + 1

#---------PROGRAMA PRINCIPAL---------#

def main():

    vetorNome = []
    vetorNum = []
    guardarVt(vetorNome, vetorNum)
    imprimirVtores(vetorNome, vetorNum)

main()