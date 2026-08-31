#programa que calcula o fatoral de um número inteiro

num = int(input("Digite um número inteiro: "))
fatorial = 1

while num < 1:
    print("Número informado inválido, para calcular a fatorial ele de ver maior que 0")
    num = int(input("Digite um número inteiro: "))

#enquanto ele for maior que 0 ele vai ser multiplicado pela fatorial e depois diminuido por 1
#pq quando ele chegar em 0 ja vai ter sido multiplicado por todos.
while num > 0:
    fatorial = fatorial * num
    num = num - 1

print(" a fatorial desse número é %d" %fatorial)
