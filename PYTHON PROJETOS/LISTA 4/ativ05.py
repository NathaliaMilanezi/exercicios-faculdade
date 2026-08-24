# lista 04 - ativ 05

cont = 1

quant = 1

print("Tabela de preços das Lojas Quase Dois")
while cont <= 50 :
 
    preco = 1.99 * quant
    
    print("Valor para %d unidades: R$%.2f " %(quant, preco))
    
    quant = quant + 1 
    cont = cont + 1