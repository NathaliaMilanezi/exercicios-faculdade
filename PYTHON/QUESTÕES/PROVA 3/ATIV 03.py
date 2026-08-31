#-----LER N-----#

def lerN():

    n = int(input("Digite um valor maior que 2: "))

    while n <= 2:

        print("Número inválido")
        n = int(input("Digite um valor maior que 2: "))
    
    return n 

#-----CALCULO-----#

def calc(n):

    somaTotal = 0 
    a = 2
    m = 3

    while a <= n:

        print("%d/%d" %(a,m))
        somaTotal = somaTotal + (a/m)
        a = a + 1
        m = m + 2

    return somaTotal

#-----PROGRAMA PRINCIPAL-----#

n = lerN()
somaTotal = calc(n)

print("total: %.2f" %somaTotal)