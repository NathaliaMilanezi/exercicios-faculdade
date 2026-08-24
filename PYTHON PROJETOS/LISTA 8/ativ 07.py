
#-----LER VOTO-----#

def lerVoto():

    voto = input("Digite o número da camisa do melhor jogador: ")

    while (voto.isdigit() == False) or (int(voto) > 23)  or (int(voto) < 0):
        print("Opção inválida!")
        voto = input("Digite o número da camisa do melhor jogador: ")

    return int(voto)

#-----GUARDAR VOTO-----#

def guardarVoto(vetorJogador):

    totalVotos = 0 

    while True:
        
        voto = lerVoto()

        if voto >= 1 and voto <= 23:

            vetorJogador[voto] += 1
            totalVotos = totalVotos + 1

        elif voto == 0:
            break
    
    return totalVotos

#-----GUARDAR VOTO-----#

def calcularPercentual(vetorJogador, totalVotos):

    percentual = (vetorJogador/totalVotos) * 100

    return percentual 

#-----MELHOR JOGADOR-----#

def melhorJogador(vetorJogador, totalVotos):

    i = 1 
    melhorJogador = 0 
    melhorVoto = 0 


    while i <= 23:

        if vetorJogador[i] > 0: 
            percentual = calcularPercentual(vetorJogador[i], totalVotos)
            print("Jogador %d, total de votos: %d -> %.2f" %(i, vetorJogador[i], percentual))

            if vetorJogador[i] > melhorVoto:
                melhorVoto = vetorJogador[i]
                melhorJogador = i 

        i = i + 1    
    percentualMelhor = calcularPercentual(melhorVoto, totalVotos)
    print("O melhor jogador foi o número %d, com %d votos, correspondendo %.2f%% dos votos" %(melhorJogador, melhorVoto, percentualMelhor))
    
#-----PROGRAMA PRINCIPAL-----#
def main():

    vetorJogador = [0] * 24
    totalVotos = guardarVoto(vetorJogador)

    melhorJogador(vetorJogador, totalVotos)
      

main()