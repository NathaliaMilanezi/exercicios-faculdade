#sequência Fibonacci

num1 = int(input("Digite um número inteiro: "))
cont = 0

numA = 1
numB = 1

while cont != num1:
    
    print("%d" %numA)

    num3 = numA + numB
    numA = numB
    numB = num3

    cont +=1

