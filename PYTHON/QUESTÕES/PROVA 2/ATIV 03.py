"""O Comitê das Olimpíadas Paris 2024 te convidou para fazer um programa em Python para computar as notas da competição de ginástica.
Cada atleta recebe notas de cinco jurados. As notas são de 0 a 10. A melhor e a pior nota são elimininadas. A nota final fica sendo a média das notas restantes.
Faça o programa usando funções."""

#----LER NOTAS----#

def lerNotas():

    cont = 0
    somaNota = 0

    while cont < 5:
        
        nota = float(input("Digite a nota: "))

        while nota < 0 or nota > 10:

            print("Nota inválida! Digite uma nota entre 0 e 10.")
            nota = float(input("Digite a nota: "))

        somaNota = somaNota + nota

        cont = cont + 1
    
    return nota, somaNota

#----NOTA MAIOR E MENOR----#

def encontrarMaiorMenor(nota):

    cont = 0 

    if cont == 0:
        maior = nota
        menor = nota

        cont = cont + 1
    
    if nota > maior:
        maior = nota

    if nota < menor: 
        menor = nota

    return maior, menor


#----CALCULAR MÉDIA----#

def calcularMedia(somaNota, maior, menor):

    media = (somaNota - menor - maior) / 3

    print("A nota final do atleta é: %.2f" %media)

    return media

#-----PROGRAMA PRINCIPAL-----#

def main():

    print("Bem vindo ao programa! Digite as cinco notas dos jurados para calcular a nota final do atleta.")

    nota, somaNota = lerNotas()
    maior, menor = encontrarMaiorMenor(nota)
    calcularMedia(somaNota, maior, menor)

main()