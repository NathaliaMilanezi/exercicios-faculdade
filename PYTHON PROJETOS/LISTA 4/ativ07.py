#lista 04 -ativ 07

codigoMaiorA = ""
codigoMenorA = ""

codigoMNP = ""
codigoMMP = ""

maiorAltura = 0 
menorAltura = 0 

maiorPeso = 0 
menorPeso = 0 

pesoTotal = 0
alturaTotal = 0
quant = 1

cont = 1
contIf = 1

while cont == 1:
     
    codigo = int(input("Digite seu código: "))

    if codigo == 0:
        
        print("Programa encerrado")
        break;
    
    peso = float(input("Digite seu peso em kg: "))
    altura = float(input("Digite sua altura em metros: "))

    if contIf == 1:
          
        codigoMaiorA = codigo 
        codigoMenorA = codigo 
          
        codigoMNP = codigo
        codigoMMP = codigo

        maiorAltura = altura
        menorAltura = altura

        maiorPeso = peso
        menorPeso = peso 

        contIf = contIf + 1
        
    if altura > maiorAltura:

        maiorAltura = altura
        codigoMaiorA = codigo

    if altura < menorAltura:
       
        menorAltura = altura 
        codigoMenorA = codigo

    if peso > maiorPeso:

        maiorPeso = peso
        codigoMMP = codigo

    if peso < menorPeso:

        menorPeso = peso 
        codigoMNP = codigo


    pesoTotal = pesoTotal + peso
    alturaTotal = alturaTotal + altura
    quant = quant + 1


mediaPeso = pesoTotal / quant
mediaAltura = alturaTotal / quant

print()

print("O cliente %d possuí a maior altura sendo %.2fm" %(codigoMaiorA, maiorAltura))
print("O cliente %d possuí a menor altura sendo %.2fm" %(codigoMenorA, menorAltura))
        
print()

print("O cliente %d possuí o maior peso sendo %.2fkg" %(codigoMMP, maiorPeso))
print("O cliente %d possuí o menor peso sendo %.2fkg" %(codigoMNP, menorPeso))

print()

print("A média dos pesos é %.2f" %mediaPeso)
print("A média das alturas é %.2f" %mediaAltura)