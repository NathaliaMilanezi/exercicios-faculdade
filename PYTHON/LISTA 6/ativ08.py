
#----LER E VÁLIDAR UM NÚMERO REAL E POSITIVO PARA O VALOR DA PRESTAÇÃO----#

def lerNumP():

    prestacao = input("Digite o valor da prestação: ")

    while prestacao.replace(".","",1).isdigit() == False:

        print("Número inválido!")
        prestacao = input("Digite o valor da prestação: ")

    while float(prestacao) < 0:

        print("Número inválido!")
        prestacao = input("Digite o valor da prestação: ")
    
    

    
    return float(prestacao)

#----LER E VÁLIDAR UM NÚMERO INTEIRO E POSITIVO PARA OS DIAS EM ATRASO----#

def lerNumAT():

    numDiasAt = input("Digite os dias em atraso: ")

    while numDiasAt.isdigit() == False:

        print("Número inválido!")
        numDiasAt = input("Digite os dias em atraso: ")

    while int(numDiasAt) < 0:

        print("Número inválido!")
        numDiasAt = input("Digite os dias em atraso: ")

    
    return int(numDiasAt)

#----CALCULAR O VALOR TOTAL DE PAGAMENTO----#

def valorPagamento(prestacao, numDiasAt):
    
    if numDiasAt > 0:

        jurosMulta = (prestacao * 0.03) + ((numDiasAt * 0.1/100) * prestacao)
        valorTotal = jurosMulta + prestacao

    return jurosMulta, valorTotal

#---------------------------------PROGRAMA PRINCIPAL---------------------------------#

while True:

    prestacao = lerNumP()

    if prestacao == 0:

        False
        break;
    
    numDiasAt = lerNumAT()

    valorPagamento(prestacao, numDiasAt)

    jurosMulta, valorTotal = valorPagamento(prestacao, numDiasAt)

    print("O valor da multa junto com a taxa de atraso foi: R$ %.2f" %jurosMulta)
    print("Valor total: R$ %.2f" %valorTotal)
    
    
        
  