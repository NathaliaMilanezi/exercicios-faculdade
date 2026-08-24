#---LER E VÁLIDAR NOTAS---#

def lerVetorNotas(i):

    notas = input("Digite nota %d: " %i)
 
    while (notas.replace(".","",1).isdigit() == False) or (float(notas) > 10) or (float(notas) < 0) :

        print("Nota inválida")
        notas = input("Digite nota %d: " %i)

    return float(notas)

#---GUARDAR ---#

def cadastrarNotas(vetorNota):

    ind = 0

    while True:

        notas = lerVetorNotas(ind + 1)
        vetorNota.append (notas)
        print("Nota %d = %.2f" %(ind + 1, vetorNota[ind]))
        ind = ind + 1

        continuar = input("Deseja continuar? S/N: ").upper()

        while continuar != "S" and continuar != "N":

            print("Caractere inválido")
            continuar = input("Deseja continuar? S/N: ").upper()

        if continuar == "N":
            return False 
        

#----PROGRAMA PRINCIPAL----#

def main():

    vetorNota = []
    cadastrarNotas(vetorNota)

main()