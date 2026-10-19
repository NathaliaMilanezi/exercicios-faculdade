

def potencia(x, y):

    if y == 0:

        #CASO BASE
        return 1
    
    # PASSO RECURSIVO: x^y = x * x^(y-1)
    return x * potencia(x, y-1)

def main():

    x = int(input("Digite digite a base: "))
    y = int(input("Digite o expoente: "))
    
    resultado = potencia(x,y)

    print(f"o resultado é: {resultado}") 

main()
