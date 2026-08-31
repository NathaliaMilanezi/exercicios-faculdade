print("atividade 6")

valor = int(input("Digite o valor do saque: "))

if valor > 0:
    nota100 = valor // 100
    valor = valor % 100

    nota50 = valor // 50
    valor = valor % 50  

    nota10 = valor // 10
    valor = valor % 10  

    nota5 = valor // 5
    valor = valor % 5 

    nota1 = valor // 1      
    
    print("Notas de 100: %d" %nota100)
    print("Notas de 50: %d" %nota50)
    print("Notas de 10: %d" %nota10)
    print("Notas de 5: %d" %nota5)  
    print("Notas de 1: %d" %nota1)

else: 
    print("Valor inválido.")