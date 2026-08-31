#desenvolver um programa que leia o nome e a altura de 20 pessoas

somaAltura = 0.0
cont = 0

#variáveis maior altura
maiorAltura = 0.0
nomeMaior = ""

#variáveis menor altura
menorAltura = 0.0
nomeMenor = ""

while cont < 20:
    nome = input("Digite o nome da pessoa: ")
    altura = float(input("Digite a altura da pessoa em metros: "))

    if cont == 0:
        maiorAltura = altura
        menorAltura = altura
        nomeMaior = nome
        nomeMenor = nome

    if altura < menorAltura:
        menorAltura = altura
        nomeMenor = nome

    if altura > maiorAltura:
        maiorAltura = altura 
        nomeMaior = nome

    somaAltura = somaAltura + altura
    cont = cont + 1

media = somaAltura/20

print("A média de alturas do grupo é %.2f m" %media)
print("A menor altura do grupo é %.2f m e a pessoa que mede isso é %s" %(menorAltura, nomeMenor))
print("A maior altura do grupo é %.2f m e a pessoa que mede isso é %s" %(maiorAltura, nomeMaior))