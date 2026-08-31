nota = float(input("Insira uma nota: "))

while nota<0 or nota>10 :
    print("Nota Inválida!")
    nota = float(input("Insira uma nota: "))

print("A nota é: %.2f" %nota)