def lerVetorNotas():

    num = input("Digite um número positivo: ")
 
    while num.replace("-", "", 1).replace(".", "", 1).isdigit() == False:

        print("Nota inválida")
        num = input("Digite um número positivo: ")

    
    return float(num)

#---------GUARDAR VETOR---------#

def guardarVetor(vetorNum):

    while True: 

        num = lerVetorNotas()

        if num < 0: 
            return False

        vetorNum.append (num)
    

#--------IMPRIMIR EM ORDEM CONTRÁRIA----------#

def imprimirInverso(vetorNum):

    i = len(vetorNum) - 1 #começar do último índice da lista

    while i >= 0: 
        print(vetorNum[i])
        i = i - 1

#---------PROGRAMA PRINCIPAL---------#

def main():

    vetorNum =  []
    guardarVetor(vetorNum)
    print("Vetor na ordem inversa:")
    imprimirInverso(vetorNum)

main()