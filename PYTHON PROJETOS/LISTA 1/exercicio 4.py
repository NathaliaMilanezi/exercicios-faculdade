print("Atividade 4")

salario = float(input("Olá! Insira seu salário: "))
porAumento = float(input("Agora insira a porcertagem de aumento: "))

calAumento = (salario * porAumento)/100
total = calAumento + salario 

print ("O seu salário agora é %.2f reais" %total)