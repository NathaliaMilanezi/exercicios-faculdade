print("Atividade 5")

nomeP = input("Olá, insira o nome do produto: ")
quant = int(input("Agora insira a quantidade: "))
preco = float(input("Qual o preço do produto: "))
desconto = float(input("Qual o desconto: "))

valorCDesc = ((preco*quant)*desconto)/100
total = (preco*quant) - valorCDesc

print("O produto " + nomeP + " custa com o desconto %.2f e o valor do desconto foi %.2f " %(total, valorCDesc))