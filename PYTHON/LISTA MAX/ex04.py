def fibonacci(n):

    # caso base: os dois primeiros números da sequência
    if n == 0:
        return 0
    if n == 1:
        return 1

    # passo recursivo: apenas a soma dos dois anteriores
    return fibonacci(n - 1) + fibonacci(n - 2)


def main():
    n = int(input("Digite um número: "))
    resultado = fibonacci(n)
    print(f"O resultado é: {resultado}")

main()