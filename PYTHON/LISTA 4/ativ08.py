#lista 04 - ativ 08

cont = 1

totalCons1 = 0
totalCons2 = 0
totalCons3 = 0

conten1 = 0 
conten2 = 0 


while cont == 1:
    
    numC = int(input("Digite seu número de consumidor: "))
    
    if numC == 0:
        print("Programa encerrado")
        break;
    
    quantKW = float(input("Digite a quantidade consumida durante o mês: "))
 
    print("1 - residencial")
    print("2 - comercial")
    print("3- industrial")
    
    codigo = int(input("Digite o código de energia consumida: "))

    if codigo == 1:
        valor = quantKW * 0.3
        conten1 = conten1 + 1
        totalCons1 = totalCons1 + quantKW

    if codigo == 2:
        valor = quantKW * 0.5
        conten2 = conten2 + 1
        totalCons2 = totalCons2 + quantKW

    if codigo == 3:
        valor = quantKW * 0.7
        totalCons3 = totalCons3 + quantKW

    print("O consumidor %d deve pagar R$ %.2f" %(numC, valor))

media1 = totalCons1 / conten1
media2 =  totalCons2 / conten2

print("O total consumido por consumidores do tipo 1 foi: %.2f" %totalCons1)
print("O total consumido por consumidores do tipo 2 foi: %.2f" %totalCons2)
print("O total consumido por consumidores do tipo 3 foi: %.2f" %totalCons3)

print("A média consumida por consumidores do tipo 1 foi: %.2f" %media1)
print("A média consumida por consumidores do tipo 2 foi: %.2f" %media2)    
