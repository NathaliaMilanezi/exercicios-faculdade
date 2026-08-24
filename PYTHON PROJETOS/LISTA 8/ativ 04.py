#-----LER NOTAS-----#

def lerNotas():

    notas = input("Digite sua nota: ")

    while (notas.replace(".", "", 1).isdigit()) == False: 

        print("Nota inválida!")
        notas = input("Digite sua nota: ")

    return notas

#-----CALCULAR MÉDIA-----#

def calcMedia(vetorMedia, vetorNotas):

    i = 0 
    somaNotas = 0

    while i < 3:

        vetorNotas.append (lerNotas())
        somaNotas = float(vetorNotas[i]) + somaNotas #transformar uma lista (string)em números (float)
        i = i + 1
    
    media = somaNotas / 3
    vetorMedia.append(media)

#-----IMPRIMIR MÉDIA-----#

def imprimirMedia(vetorMedia):

    i = 0 
    while i < len(vetorMedia):

        if vetorMedia[i] >= 7:       #percorre o própio vetorMedia e filtra na hora de imprimir                   
            print("a média foi %.2f" %vetorMedia[i])

        i = i + 1

#-----PROGRAMA PRINCIPAL-----#

def main():

    vetorMedia = []
    vetorNotas= []

    while True:
        calcMedia(vetorMedia, vetorNotas)
        

        continuar = input("Deseja continuar (S/N)?: ").upper()

        while continuar != "N" and continuar != "S":
            print("Opção inválida!")
            continuar = input("Deseja continuar (S/N)?: ").upper()

        if continuar == "N":
            break

        imprimirMedia(vetorMedia)

main()

