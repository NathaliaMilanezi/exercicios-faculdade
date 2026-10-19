def soma_ate_n(n):

    #caso base 
    if (n == 1):
        return 1

    #passo recursivo
    return n + soma_ate_n(n - 1)

def main():

    n = int(input("Digite um número inteiro: "))

    resultado = soma_ate_n(n)

    print(f"o resultado é: {resultado}")

main()

