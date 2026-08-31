
def lerNota():

    maior = 0 
    menor = 0 
    cont = 0 
    somaNota = 0 

    while cont < 5:

        nota = float(input("Digite a nota: "))

        while nota < 0 or nota > 10:

            print("Nota inválida")
            nota = float(input("Digite a nota: "))

        if cont == 0: 

            maior = nota
            menor = nota

        if nota < menor:

            menor = nota 

        if nota > maior: 

            maior = nota

        somaNota = somaNota + nota
        cont = cont + 1
    
    return somaNota, maior, menor

#-----CALCULAR A MÉDIA-----#

def media(somaNota, maior, menor):

    media = (somaNota - maior - menor)/3

    print("A média final do atleta foi: %.2f" %media)

#-----PROGRAMA PRINCIPAL-----#
def main():
    somaNota, maior, menor = lerNota()
    media(somaNota, maior, menor)

main()