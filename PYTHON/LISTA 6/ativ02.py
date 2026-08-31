#lista 5 - ex 2

#ler gabarito do professor 

def gabarito():

    resp = input("Questão: ").upper() 

    while (resp != "A") and (resp != "B") and (resp != "C") and (resp != "D") and (resp != "E"): 

        print("Carctere inválido!")
        resp = input("Questão: ").upper() 
    
    gab = resp   

    return gab

#------------------------------------------------#

def comparar(resp,gab):

    if resp == gab:
        return 1
    
    else:
        return 0

#Programa Principal------------------------------#

totalAlunos = 0 
somaNotas = 0
continuar = "S"

contGab = 1

maiorNota = -1
menorNota = 9999

#gabarito da prova

print("Professor, digite o gabarito da prova")

gab1 = gabarito()
gab2 = gabarito()
gab3 = gabarito()
gab4 = gabarito()
gab5 = gabarito()
gab6 = gabarito()
gab7 = gabarito()
gab8 = gabarito()
gab9 = gabarito()
gab10 = gabarito()


#gabarito obtido, agora os alunos podem começar a responder as questões

print("Digite o gabarito do aluno")

while continuar == "S":

    nota = 0 

    # questão 01 ----------- #    
    
    resp = gabarito()
    nota = nota + comparar(resp, gab1)

    # questão 02 ----------- #

    resp = gabarito()
    nota = nota + comparar(resp, gab1)

    # questão 03 ----------- #

    resp = gabarito()
    nota = nota + comparar(resp, gab3)

    # questão 04 ----------- #

    resp = gabarito()
    nota = nota + comparar(resp, gab4)

    # questão 05 ----------- #

    resp = gabarito()
    nota = nota + comparar(resp, gab5)

    # questão 06 ----------- #

    resp = gabarito()
    nota = nota + comparar(resp, gab6)

    ## questão 07 ----------- #

    resp = gabarito()
    nota = nota + comparar(resp, gab7)

    # questão 08 ----------- # 

    resp = gabarito()
    nota = nota + comparar(resp, gab8)
    
    # questão 09 ----------- #

    resp = gabarito()
    nota = nota + comparar(resp, gab1)
    
    # questão 10 ----------- #

    resp = gabarito()
    nota = nota + comparar(resp, gab10)
    
    #maior nota
    if nota > maiorNota:
        maiorNota = nota

    #menor nota
    if nota < menorNota:
        menorNota = nota

    totalAlunos = totalAlunos + 1
    somaNotas = somaNotas + nota
    media = somaNotas/totalAlunos

    print("Sua nota foi %i" %nota)

    continuar = input("Deseja continuar? (S/N): ").upper()

    if continuar == "N":
        print("Programa finalizado")

print("O total de alunos foi: %i" %totalAlunos)
print("A maior nota foi: %i" %maiorNota)
print("A menor nota foi: %i" %menorNota)
print("A média total dos alunos foi: %i" %media)