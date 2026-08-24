
#-----LER IDADE-----#

def lerIdade():

    idade = input("Digite sua idade: ")

    while (idade.isdigit() == False) or (int(idade) > 110) or (int(idade) < 1):
        print("Idade inválida!")
        idade = input("Digite sua idade: ")

    return int(idade)


#-----LER ALTURA-----#

def lerAltura():

    altura = input("Digite sua altura em metros: ")

    while (altura.replace(".", "", 1).isdigit() == False) or (float(altura) > 2.30) or (float(altura) < 0.90)  :
        
        print("Altura inválida!")
        altura = input("Digite sua altura em metros: ")

    return float(altura)

#-----GUARDAR NO VETOR-----#

def guardarVetor(vetorIdade, vetorAltura):

    idade = lerIdade()
    vetorIdade.append(idade)

    altura = lerAltura()
    vetorAltura.append(altura)

#-----IMPRIMIR EM ORDEM CONTRÁRIA-----#

def imprimirInverso(vetorIdade, vetorAltura):

    i = len(vetorIdade) - 1 #começar do último índice da lista

    while i >= 0: 
        print("Idades coletadas %s" %vetorIdade[i])
        print("Alturas coletadas %s" %vetorAltura[i])
        i = i - 1

#-----PROGRAMA PRINCIPAL-----#

def main():

    vetorIdade = []
    vetorAltura = []

    while True:

        guardarVetor(vetorIdade, vetorAltura)

        continuar = input("Deseja continuar (S/N)?: ").upper()

        while continuar != "N" and continuar != "S":
            print("Opção inválida!")
            continuar = input("Deseja continuar (S/N)?: ").upper()

        if continuar == "N":
            break
    
    imprimirInverso(vetorIdade, vetorAltura)

main()
    