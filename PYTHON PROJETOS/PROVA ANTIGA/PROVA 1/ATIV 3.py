print("ATIVIDADE 3")

paoF = int(input("Digite a quantidade de pães franceses: "))
paoD = int(input("Digite a quantidade de pães de queijo: "))

quantP = paoF * 0.80
quantPQ = paoD * 1.70

print("Valor total dos pães franceses: R$ %.2f"  %quantP)
print("Valor total dos pães de queijo: R$ %.2f" %quantPQ)

total = quantP + quantPQ
print("Valor total: R$ %.2f" %total)

poupanca = total * 0.15
print("Valor a ser depositado na poupança: R$ %.2f" %poupanca)