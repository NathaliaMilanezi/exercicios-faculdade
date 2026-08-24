nome = input("Digite seu nome: ")
senha = input("Digite sua senha: ")

#validação da senha
#len para checar a quantidade de caracteres da senha, e o nome não pode ser igual a senha
while nome == senha or len(senha) < 6: 
    print("Erro! nome ou senha incorretos.")
    print("Por favor digite novamente!")
    nome = input("Digite seu nome: ")
    senha = int("Digite sua senha: ")

print("Seu nome de usuário é %s" %nome)
print("Sua senha é %s" %senha)
