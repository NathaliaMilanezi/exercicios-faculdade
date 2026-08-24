
#----LER QUANTIDADE----#

def lerQtde(nomes):

    qtde = int(input("Quantidade de chuva do mês %s: " %nomes))

    while qtde < 0:
        print("Quantidade inválida!")
        qtde = int(input("Quantidade de chuva do mês %s" %nomes))

    return qtde

#----LER QUANTIDADE----#

def lerVetorChuvas(vetChuvas, vetNomes):

    i = 0 

    while i < len(vetNomes):

        qnt = lerQtde(vetNomes[i])
        vetChuvas.append(qnt)
        i = i + 1

#----CALCULAR A MÉDIA----#

def calcMedia(vetChuvas):

    soma = 0 
    i = 0 

    while i < len(vetChuvas):
        soma = soma + vetChuvas[i]
        i = i + 1
    
    media = soma / len(vetChuvas)
    return media

#----IMPRIMIR----#

def imprimir(vetChuvas, vetNomes, media):

    i = 0 

    while  i < vetChuvas[i] :
      
      if vetChuvas[i] > media:
        print("%s: %d" %(vetNomes[i], vetChuvas[i]))

      i = i + 1

#----PRINCIPAL----#

vetChuvas =[]
vetNomes = ["Janeiro", "Fevereiro",  "Março", "Abril", "Maio",
            "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"]

lerVetorChuvas(vetChuvas, vetNomes)
media = calcMedia(vetChuvas)

print(media)
imprimir(vetChuvas, vetNomes, media)

