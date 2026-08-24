#alterar ativ 04 lista 3

#validar nome

def validaNome(nome):
    
    while len(nome) <= 3: 
        print("Nome inválido")
        nome = input("Digite seu nome: ")
        
    return nome

#validar idade

def validaIdade(idade):

    while 0 > idade < 150:
        print("Idade inválida")
        idade = int(input("Digite sua idade: "))

    return idade

nome = input("Digite seu nome: ")
validaNome(nome)

idade = int(input("Digite sua idade: "))
validaIdade(idade)

sexo = input("Qual o seu sexo (f - feminino ou m - masculino): ").upper
estadoCivil = input("Qual o seu estado civil (s, c, v, d): ").upper


print("nome = %s" %nome)
print("idade = %i" %idade)
print("sexo = %s" %sexo)
print("estado civil = %s" %estadoCivil)