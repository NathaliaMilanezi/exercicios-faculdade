"""O programa abaixo calcula o preço final de um produto. Implemente as quatro funções que
estão faltando e complete as lacunas do programa principal para que ele execute corretamente."""

#-----ESCOLHER PRODUTO-----#

def escolherProduto():

    print("Olá, seja bem vindo! Produtos disponíveis:")
    print("1- Notebook")
    print("2- Smartphone")
    print("3- Tablet")

    prod = int(input("Digite o código do protudo: "))

    while prod != 1 and prod != 2 and prod !=3:
        print("Código inválido")
        prod = int(input("Digite o código do protudo: "))

    if prod == 1:
        return 4000
    
    elif prod == 2:
        return 1500
    
    else: 
        return 800
    
#-----LER QUANTIDADE-----#

def lerQtde():

    qtde = int(input("Digite a quantidade desejada: "))

    while qtde < 0:
        print("Quantidade inválida!")
        qtde = int(input("Digite a quantidade desejada: "))

    return qtde    

#-----FORMA DE PAGAMENTO-----#

def formaDePagamento():

    print("Defina sua forma de pagamento")
    print("1- À vista")
    print("2- No cartão")
    print("3- À prazo")
    pag = int(input("Informe o código: "))

    while pag != 1 and pag != 2 and pag != 3:

        print("Código informado inválido!")
        pag = int(input("Informe o código: "))
    
    if pag == 1:
        return 1
    
    elif pag == 2:
        return 2
    
    else:
        return 3
    
#-----CALCULAR O TOTAL-----#

def calcTotal(preco, qtde, pag):

    if pag == 1:

        desc = preco * qtde * 0.1
        total = preco  * qtde - desc
        return total
    
    elif pag == 2:

        acr = preco * qtde * 0.05
        total = preco * qtde + acr
        return total 
    
    else: 

        acr = preco * qtde * 0.1
        total = preco * qtde + acr
        return total

#-----PROGRAMA PRINCIPAL-----#

preco = escolherProduto()
print()
qtde = lerQtde()
print()
pag = formaDePagamento()
print()
total = calcTotal(preco, qtde, pag)

print("TOTAL: R$ %.2f" %total)