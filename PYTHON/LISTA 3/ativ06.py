#variáveis
continuar = 1

somaPar = 0 
somaImpar = 0
somaEvery = 0

numImpar = 0
numPar = 0 

quantPar = 0 
quantImpar = 0

maiorNum = 0

while continuar == 1:
    numero = int(input("Digite um número de 1 a 1000: "))
    resto = numero % 2
    

    if continuar == 1:
        maiorNum == numero
        
    if numero > maiorNum:
        maiorNum = numero

    if numero < 1:
        print("número inválido")
        numero = int(input("Digite um número de 1 a 1000: "))
   
    if resto == 0: 
        numPar = numero
        quantPar = quantPar + 1

    else: 
        numImpar = numero
        quantImpar = quantImpar + 1

    
    if continuar == -1:
        print("programa parou")
        break
    
    #soma das variaveis
    somaPar = somaPar + numPar
    somaImpar = somaImpar + numImpar
    somaEvery = somaEvery + numero
  
    
    continuar = float(input("Digite 1 para continuar e -1 para parar: "))
    
    #para o programa parar
    if continuar == -1:
        break

mediaPar = somaPar/quantPar
mediaImpar = somaImpar/quantImpar

print("A média de números par foi %.2f e a quantidade de números  foi %i" %(mediaPar, quantPar))
print("A média de números ímpares foi %.2f e a quantidade de números foi %i" %(mediaImpar, quantImpar))
print("E a soma total de todos os números foi %i" %somaEvery)
print("O maior número foi: %i" %maiorNum)