nome = input("Digite seu nome: ")
idade = int(input("Digite sua idade: "))
sexo = input("Qual o seu sexo (f - feminino ou m - masculino): ").upper
estadoCivil = input("Qual o seu estado civil (s, c, v, d): ").upper

while len(nome) <= 3: 
    print("Nome inválido")
    nome = input("Digite seu nome: ")

while 0 > idade > 150:
    print("Idade inválida")
    idade = int(input("Digite sua idade: "))

print("nome = %s" %nome)
print("idade = %i" %idade)
print("sexo = %s" %sexo)
print("estado civil = %s" %estadoCivil)