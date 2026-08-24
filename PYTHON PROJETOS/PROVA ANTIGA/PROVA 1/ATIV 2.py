print("ATIVIDADE 2")

n1 = int(input("Digite o primeiro número: "))
n2 = int(input("Digite o segundo número: "))

if n1 > n2:
    maximo = n1
    minimo = n2

else: 
    maximo = n2
    minimo = n1

n3 = int(input("Digite o terceiro número: "))

if minimo<n3<maximo:
    print("Dentro do intervalo")

elif minimo>n3:
    print("Abaixo do intervalo")

else:
    print("Acima do intervalo")

    