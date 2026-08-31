#lista 4 - ex 9

#variáveis 
totalAlunos = 0 
somaNotas = 0
continuar = "S"

maiorNota = -1
menorNota = 9999

#gabarito da prova

gab1 = "A"
gab2 = "B"
gab3 = "C"
gab4 = "D"
gab5 = "E"
gab6 = "E"
gab7 = "D"
gab8 = "C"
gab9 = "B"
gab10 = "A"

print("Digite o seu gabarito: ")
while continuar == "S":

    nota = 0 

    #obtendo as respostas

    #questão 1

    resp1 = input("Questão 1: ").upper() 

    #validação da nota
    while (resp1 != "A") and (resp1 != "B") and (resp1 != "C") and (resp1 != "D") and (resp1 != "E"): 

        print("Resposta inválida!")
        resp1 = input("Questão 1: ").upper() 
   
    #correção da questão
    if resp1 == gab1:
        nota = nota + 1

    #questão 2

    resp2 = input("Questão 2: ").upper() 

    while (resp2 != "A") and (resp2 != "B") and (resp2 != "C") and (resp2 != "D") and (resp2 != "E"): 

        print("Resposta inválida!")
        resp2 = input("Questão 2: ").upper() 
   
    if resp2 == gab2:
        nota = nota + 1

    #questão 3

    resp3 = input("Questão 3: ").upper() 

    while (resp3 != "A") and (resp3 != "B") and (resp3 != "C") and (resp3 != "D") and (resp3 != "E"): 

        print("Resposta inválida!")
        resp3 = input("Questão 3: ").upper() 
   
    if resp3 == gab3:
        nota = nota + 1

    #questão 4

    resp4 = input("Questão 4: ").upper() 

    while (resp4 != "A") and (resp4 != "B") and (resp4 != "C") and (resp4 != "D") and (resp4 != "E"): 

        print("Resposta inválida!")
        resp4 = input("Questão 4: ").upper() 
   
    if resp4 == gab4:
        nota = nota + 1

    #questão 5

    resp5 = input("Questão 5: ").upper() 

    while (resp5 != "A") and (resp5 != "B") and (resp5 != "C") and (resp5 != "D") and (resp5 != "E"): 

        print("Resposta inválida!")
        resp5 = input("Questão 5: ").upper() 
   
    if resp5 == gab5:
        nota = nota + 1

    #questão 6

    resp6 = input("Questão 6: ").upper() 

    while (resp6 != "A") and (resp6 != "B") and (resp6 != "C") and (resp6 != "D") and (resp6 != "E"): 

        print("Resposta inválida!")
        resp6 = input("Questão 6: ").upper() 
   
    if resp6 == gab6:
        nota = nota + 1

    #questão 7

    resp7 = input("Questão 7: ").upper() 

    while (resp7 != "A") and (resp7 != "B") and (resp7 != "C") and (resp7 != "D") and (resp7 != "E"): 

        print("Resposta inválida!")
        resp7 = input("Questão 7: ").upper() 
   
    if resp7 == gab7:
        nota = nota + 1

    #questão 8

    resp8 = input("Questão 8: ").upper() 

    while (resp8 != "A") and (resp8 != "B") and (resp8 != "C") and (resp8 != "D") and (resp8 != "E"): 

        print("Resposta inválida!")
        resp8 = input("Questão 8: ").upper() 
   
    if resp8 == gab8:
        nota = nota + 1
    
    #questão 9

    resp9 = input("Questão 9: ").upper() 

    while (resp9 != "A") and (resp9 != "B") and (resp9 != "C") and (resp9 != "D") and (resp9 != "E"): 

        print("Resposta inválida!")
        resp9 = input("Questão 9: ").upper() 
   
    if resp9 == gab9:
        nota = nota + 1
    
    #questão 10

    resp10 = input("Questão 10: ").upper() 

    while (resp10 != "A") and (resp10 != "B") and (resp10 != "C") and (resp10 != "D") and (resp10 != "E"): 

        print("Resposta inválida!")
        resp10 = input("Questão 10: ").upper() 
   
    if resp10 == gab10:
        nota = nota + 1
    
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