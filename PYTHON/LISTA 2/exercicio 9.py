print("atividade 9")

produto = int(input("Digite o número produto que você deseja (p1 1 a 10, p2 11 a 20, p3 21 a 30, p4 31 a 40): "))
quantidade = int(input("Digite a quantidade do produto: "))

if produto >= 1 and produto <= 10:
    valor = 10

elif produto >= 11 and produto <= 20:
    valor = 15

elif produto >= 21 and produto <= 30:
    valor = 20

elif produto >= 31 and produto <= 40:
    valor = 30

preco = valor * quantidade

if preco >= 250:
    desconto = preco * 0.05
    preco_final = preco - desconto
    print("O preço final com desconto é de %.2f e o desconto é de %.2f" % (preco_final, desconto))

if 250 < preco <= 500:
    desconto = preco * 0.1
    preco_final = preco - desconto
    print("O preço final com desconto é de %.2f e o desconto é de %.2f" % (preco_final, desconto))

if preco > 500:
    desconto = preco * 0.15
    preco_final = preco - desconto
    print("O preço final com desconto é de %.2f e o desconto é de %.2f" % (preco_final, desconto))

