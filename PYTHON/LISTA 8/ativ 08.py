
#-----LER NOME DO CARRO-----#

def lerNomeCarro(vetorNomeCarro):

    i = 0 

    while i < 5:
        nomeCarro = input("Digite o nome do carro %d: " %(i +1))
        vetorNomeCarro.append(nomeCarro)
        i = i + 1

#-----GASTO POR KM-----#

def lerGastoKm(vetorGastopKm):

    i = 0 

    while i < 5:

        gastoKm = float(input("Digite o gasto do carro %d em litro por km rodado: " %(i + 1)))

        while gastoKm < 0: 

            print("Valor inválido!")
            gastoKm = float(input("Digite os km rodados do carro %d por litro: " %(i + 1)))
        
        vetorGastopKm.append(gastoKm)
        i = i + 1

#-----GASTO POR KM-----#

def calculo(vetorNomeCarro, vetorGastopKm, vetorResultado):

    i = 0 

    while i < len(vetorNomeCarro):
    
        calc = (1000/vetorGastopKm[i]) * 6.50
        vetorResultado.append(calc)
        print("%.2f" %calc)
    
        i = i + 1

#-----IMPRIMIR-----#

def imprimir(vetorNomeCarro, vetorGastopKm, vetorResultado):

    i = 0 

    print("Relatório Final")
    print()

    while i < 5:

        print("%d - %s - %.2f - R$ %.2f " %((i + 1), vetorNomeCarro[i], vetorGastopKm[i], vetorResultado[i]))

        i = i + 1

#-----PROGRAMA PRINCIPAL-----#

def main():

    vetorNomeCarro = []
    vetorGastopKm = []
    vetorResultado = []

    lerNomeCarro(vetorNomeCarro)
    lerGastoKm(vetorGastopKm)

    calculo(vetorNomeCarro, vetorGastopKm, vetorResultado)
    imprimir(vetorNomeCarro, vetorGastopKm, vetorResultado)

main()