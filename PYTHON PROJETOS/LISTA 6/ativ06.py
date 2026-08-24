#----SOMA DO IMPOSTO----#

def somaImposto(valorCusto, taxaImposto):

    juros = (valorCusto) * (taxaImposto/100)
    valorTotal = valorCusto + juros

    return juros, valorTotal

#---------------------------------PROGRAMA PRINCIPAL---------------------------------#

print("Olá, seja bem vindo!")
print()

valorCusto = float(input("Digite o valor de custo da sua conta: "))
print()

taxaImposto = float(input("Digite a taxa do imposto: "))

somaImposto(valorCusto, taxaImposto)

juros, valorTotal = somaImposto(valorCusto, taxaImposto)

print("O total de impostos que foram adicionados a sua conta foi: R$ %.2f" %juros)
print()
print("Valor total: R$ %.2f" %valorTotal)