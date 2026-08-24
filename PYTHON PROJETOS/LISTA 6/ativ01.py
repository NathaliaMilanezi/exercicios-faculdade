# Atividade 1 - Lista 6

def lerNota():

    nota = float(input("Digite a nota do aluno: "))
    
    while nota < 0 or nota >10:
        print("Nota inválida!")
        nota = float(input("Digite a nota do aluno: "))

    return nota

#--------------------------------------------------------#

def lerNome():

    nome = input("Digite o nome do aluno: ")

    return nome

#--------------------------------------------------------#

def Calmedia(n1, n2, n3):

    total = (n1 + n2 + n3)
    media = total/3

    return media, total

#--------------------------------------------------------#

def decrescente(n1,n2,n3, total):

#maior nota
  
    if n1>=n2 and n1>=n3: 
        maiorNota = n1

    elif n2>=n1 and n2>=n3:
        maiorNota = n2

    else:
        maiorNota = n3

#menor nota

    if n1<=n2 and n1<=n3:
        menorNota = n1

    elif n2<=n1 and n2<=n3: 
        menorNota = n2

    else:
        menorNota = n3
    
    meio = total - menorNota - maiorNota

    return maiorNota, menorNota, meio

#--------programa principal----------#

nome = lerNome()

n1 = lerNota()
n2 = lerNota()
n3 = lerNota()

media, total = Calmedia(n1, n2, n3)

maiorNota, menorNota, meio = decrescente(n1, n2, n3, total)

print("A média do aluno(a) %s foi %.2f" %(nome, media))

if media >= 7: 
    print("Aluno aprovado!")

elif media < 6:
    print("Aluno reprovado!")

else:
    print("Prova final!")

print("Suas notas foram: %.2f, %.2f,%.2f" %(maiorNota, meio, menorNota))

