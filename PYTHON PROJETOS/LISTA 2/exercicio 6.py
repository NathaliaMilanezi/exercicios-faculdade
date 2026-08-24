print("atividade 6")

combustivel = input("Qual tipo de combustível você deseja (A - álcool e G - gasolina):  ")
litros = float(input("Quantos litros você quer colocar: "))


if combustivel == "A" and litros <= 20: 
    desconto = (3.20*litros)*3/100
    
elif combustivel == "A" and litros > 20: 
    desconto = (3.20*litros)*4//100

elif combustivel == "G" and litros <= 20: 
    desconto = (3.90*litros)*4/100

else:  
    desconto = (3.90*litros)*6/100

if combustivel == "G": 
    total = (3.90*litros) - desconto

else: 
    total = (3.20*litros) - desconto

print("O valor a ser pago é: %.2f" %total)