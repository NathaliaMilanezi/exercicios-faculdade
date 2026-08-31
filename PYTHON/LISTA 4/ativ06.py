# Lista 04 - ativ06

total = 0.0 
cont = 1
quant =1
total = 0

while cont == 1:

    prod = float(input("Digite o preço: "))
    print("Produto %d: R$%.2f" %(quant, prod))
    
    quant = quant + 1
    total = total + prod


    if prod == 0:
        print("Total: R$ %.2f" %total)
        break;
        

dinheiro = float(input("Digite o valor do pagamento: "))
troco = dinheiro - total 

print("O troco deve ser de R$ %.2f" %troco)
