import numpy as np
import matplotlib.pyplot as plt
import sympy as sp

# ---------- Definição da função ----------
x = sp.symbols("x")

# Cada ramo: (expressão, intervalo)
ramos = [
    (1 + x, x < -1),
    (x**2, (x >= -1) & (x < 1)),
    (2 - x, x >= 1),
]
f_sym = sp.Piecewise(*ramos)


def f(valor):
    """Avalia f em um número (aceita float)."""
    if valor < -1:
        return 1 + valor
    elif valor < 1:
        return valor**2
    return 2 - valor


# ---------- Limites laterais e continuidade nos pontos de quebra ----------
print("f(x) =")
sp.pprint(f_sym)
print()

# expressão de cada lado de cada ponto crítico
pontos = {
    -1: (1 + x, x**2),   # (ramo à esquerda, ramo à direita)
    1: (x**2, 2 - x),
}

for a, (esq, dir_) in pontos.items():
    lim_esq = sp.limit(esq, x, a, dir="-")
    lim_dir = sp.limit(dir_, x, a, dir="+")
    valor = f(a)

    print(f"--- Ponto x = {a} ---")
    print(f"lim x->{a}- f(x) = {lim_esq}")
    print(f"lim x->{a}+ f(x) = {lim_dir}")
    print(f"f({a})          = {valor}")

    if lim_esq == lim_dir:
        print(f"O limite existe e vale {lim_esq}.")
        if lim_esq == valor:
            print("f é CONTÍNUA neste ponto.")
        else:
            print("f é DESCONTÍNUA (removível) neste ponto.")
    else:
        print("O limite NÃO existe (limites laterais diferentes).")
        if lim_esq == valor:
            print("f é contínua pela esquerda.")
        elif lim_dir == valor:
            print("f é contínua pela direita.")
        print("Descontinuidade de SALTO.")
    print()

# ---------- Gráfico ----------
fig, ax = plt.subplots(figsize=(8, 5))

x1 = np.linspace(-3, -1, 200, endpoint=False)
x2 = np.linspace(-1, 1, 200, endpoint=False)
x3 = np.linspace(1, 3, 200)

ax.plot(x1, 1 + x1, "b")
ax.plot(x2, x2**2, "b")
ax.plot(x3, 2 - x3, "b")

# bolinhas: cheia = ponto incluído, vazia = ponto excluído
ax.plot(-1, f(-1), "bo")                                # f(-1) = 1 (cheia)
ax.plot(-1, 0, "bo", mfc="white")                       # 1 + (-1) = 0 (vazia)
ax.plot(1, f(1), "bo")                                  # f(1) = 1 (contínua em x = 1)

ax.axhline(0, color="k", lw=0.8)
ax.axvline(0, color="k", lw=0.8)
ax.grid(alpha=0.3)
ax.set_xlabel("x")
ax.set_ylabel("f(x)")
ax.set_title("Função definida por partes")
plt.savefig('grafico.png', dpi=120)
plt.show()