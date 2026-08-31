
#------LER GABARITO------#

def lerGab(gabaritofc):

    ind = 0 

    while ind < 10:

        gab = input("Questão %d: " %(ind + 1)).upper()

        while gab != "A" and gab != "B" and gab != "C" and gab != "D" and gab != "E":

            print("Alternativa inválida!")
            gab = input("Questão %d: " %(ind + 1)).upper()

        gabaritofc.append (gab)
        ind = ind + 1
        
#------GABARITO ALUNO------#

def lerAluno(gabaritoAluno):

    i = 0 

    while i < 10:

        gab = input("Questão %d: " %(i + 1)).upper()

        while gab != "A" and gab != "B" and gab != "C" and gab != "D" and gab != "E":

            print("Alternativa inválida!")
            gab = input("Questão %d: " %(i + 1)).upper()

        gabaritoAluno.append (gab)
        i = i + 1

#------ACERTOS------#

def acertos(gabaritofc, gabaritoAluno):

    acertos = 0 
    i = 0

    while i < 10:    
        
        if gabaritoAluno[i] == gabaritofc[i]:
            acertos = acertos + 1

        i = i + 1
        
    return acertos

#------ESTATÍSTICAS------#

def mediaMM(pontos, totalAlunos, somaNotas, maiorNota, menorNota):

    totalAlunos = totalAlunos + 1
    somaNotas = somaNotas + pontos

    if pontos < menorNota:
        menorNota = pontos

    if pontos > maiorNota:
        maiorNota = pontos

    return totalAlunos, somaNotas, maiorNota, menorNota

#------IMPRIMIR------#

def imprimir(totalAlunos, somaNotas, maiorNota, menorNota):

    print("%d alunos utilizaram o sistema" %totalAlunos)
    print("%d foi a maior nota" %maiorNota)
    print("%d foi a menor nota" %menorNota)
    print("A média geral da turma foi %.2f" %(somaNotas/totalAlunos))

#------IMPRIMIR------#

def continuar():

    cont = input("Deseja continuar (S/N)?: ").upper()

    while cont != "S" and cont != "N":

        print("Opção inválida!")
        cont = input("Deseja continuar (S/N)?: ").upper()

    return cont

#------PROGRAMA PRINCIPAL------#

def main():

    print("Digite o gabarito oficial professor!")
    gabaritofc = []
    lerGab(gabaritofc)

    totalAlunos = 0 
    somaNotas = 0 
    maiorNota = 0 
    menorNota = 10

    while True:

        print("Aluno digite seu gabarito!")
        gabaritoAluno = []
        lerAluno(gabaritoAluno)

        pontos = acertos(gabaritofc, gabaritoAluno)
        print("Você acertou %i questões!" %pontos)

        totalAlunos, somaNotas, maiorNota, menorNota = mediaMM(pontos, totalAlunos, somaNotas, maiorNota, menorNota)

        cont = continuar()
        if cont == "N":
            break

    imprimir(totalAlunos, somaNotas, maiorNota, menorNota)


main()