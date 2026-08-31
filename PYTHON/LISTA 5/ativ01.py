#alterando a questão 3 da lista 3

#validação do nome e senha

def valida_nome_senha(nome, senha):
    while nome == senha or len(senha) < 6: 
        
        print("Erro! nome ou senha incorretos.")
        print("Por favor digite novamente!")
       
        nome = input("Digite seu nome: ")
        senha = input("Digite sua senha: ")

    return nome, senha
#-----------------------------------------------#

nome = input("Digite seu nome: ")
senha = input("Digite sua senha: ")

valida_nome_senha(nome, senha)
    
print("Seu nome de usuário é %s" %nome)
print("Sua senha é %s" %senha)


