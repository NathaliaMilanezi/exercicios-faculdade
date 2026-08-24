
#----LER UMA RESPOSTA----#

def lerUmaResp(n):

    res = input("Questão %d: " %n)
    res= res.upper()

    while res != "A" and res != "B" and res != "C" and res != "D" and res != "E":

        res = input("Questão inválida! Questão %d: " %n)
        res= res.upper()

    return res

#----LER GABARITO----#

def lerVetorRespostas(resposta):

    print("Digite o gabarito")
    n = 1

    while n <= 10:
        resp = lerUmaResp(n)
        resposta.append(resp)

        n = n + 1

#----COMPARAR RESPOSTAS----#

def comparaRespostas(vAluno, vGab):

    n = 0
    acertos = 0 

    while n < len(vGab):

        if vAluno[n] == vGab[n]:
            acertos = acertos + 1
        
        n = n + 1 
    
    return acertos
#----PRINCIPAL----#

vGab = [] 
lerVetorRespostas(vGab)

continuar = "S"

while continuar == "S":

    vAluno = []
    lerVetorRespostas(vAluno)
    acertos = comparaRespostas(vAluno, vGab)

    print("Você teve %d acertos." %acertos)

    continuar = input("Deseja continuar (S ou N)?")
    continuar = continuar.upper()