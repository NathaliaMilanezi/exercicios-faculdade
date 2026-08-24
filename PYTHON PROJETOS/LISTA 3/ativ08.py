#mudando atividade passada

populacaoA =  int(input("Digite a quantidade da primeira população: "))
populacaoB = int(input("Digite a quantidade da segunda populção: "))

taxaA = float(input("Digite a porcentagem de crescimento da primeira população: "))
taxaB = float(input("Digite a porcentagem de crescimento da segunda população: "))

anos = 0

#verificação de taxas
while taxaB >= 15:
    print("Taxa da segunda população inválida: ")
    taxaB = float(input("Digite a porcentagem de crescimento da segunda população: "))

while taxaA >= 15:
    print("Taxa da primeira população inválida: ")
    taxaA = float(input("Digite a porcentagem de crescimento da primeira população: "))

while populacaoA < populacaoB or populacaoB < populacaoA:
    
    populacaoA = populacaoA * (1 + (taxaA/100))
    populacaoB = populacaoB * (1 + (taxaB/100))

    anos = anos + 1

print("Anos necessários para elas se igualarem: %i " %anos)