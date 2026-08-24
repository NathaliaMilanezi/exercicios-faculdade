print("Atividade 3")

dias = int(input("Insira a quantidade de dias: "))
horas = float(input("Insira a quantidade de horas: "))
minutos = float(input("Insira a quantidade de minutos: "))
segundos = float(input("Insira a quantidade de segundos: "))

total = (dias * 86400) + (horas * 3600) + (minutos * 60) + segundos

print("o valor final é %.2f segundos" %total)