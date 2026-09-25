def fatorial(n):
    if n < 0:
        raise ValueError("Fatorial não definido para números negativos.")

    resultado = 1

    for i in range(2, n + 1):
        resultado *= i

    return resultado


def arranjo(n, p):
    return fatorial(n) // fatorial(n - p)


def senhas_com_repeticao(n_opcoes=36, tamanho=8):
    return n_opcoes ** tamanho


def senhas_sem_repeticao(n_opcoes=36, tamanho=8):
    return arranjo(n_opcoes, tamanho)


def main():
    print("=" * 60)
    print("EXERCÍCIO 10 - Espaço de Busca de Senhas")
    print("=" * 60)

    com_rep = senhas_com_repeticao(36, 8)
    sem_rep = senhas_sem_repeticao(36, 8)

    print(f"Senhas possíveis COM repetição (36^8):    {com_rep:,}".replace(",", "."))
    print(f"Senhas possíveis SEM repetição (A(36,8)): {sem_rep:,}".replace(",", "."))
    print(f"Razão entre os dois cenários (com/sem): {com_rep / sem_rep:.2f}x")


main()