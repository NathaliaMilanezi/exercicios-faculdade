print("atividade 4")

hora = float(input("Diga que horas são (7hrs ou 7,5hrs): "))

if 0 <= hora < 5:
    print("vai dormir")

elif 5 <= hora < 12: 
    print("bom diaa")

elif 12 <= hora < 18: 
    print("boa tardee")

elif 18 <= hora < 24: 
    print("boa noite")

else: 
    print("hora inválida")