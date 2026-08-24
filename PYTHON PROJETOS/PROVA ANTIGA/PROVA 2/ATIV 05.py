"""A sequência de Fibonacci é a seguinte: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... Sua regra de formação é simples: os dois primeiros elemntos são 1;
a partir de então, cada elemento é a soma dos dois anteriores. Faça um programa em python, usando funções, para alterar a sequência de Fibonacci de maneira
que os dois primeiros números não sejam 1 e 1, mas sim que peça ao usuário para digitar dois números quaisquer para começar a sequência. Os demais números 
são calculados de acordo com a regra de Fibonacci.  Peça também o total de números que serão mostrados."""

#----LER NÚMEROS----#

def lerNumeros():

    num1 = int(input("Digite o primeiro número da sequência de Fibonacci: "))
    
    while num1 < 0:
        print("Valor inválido! Digite um número maior ou igual a zero.")
        num1 = int(input("Digite o primeiro número da sequência de Fibonacci: "))
    
    num2 = int(input("Digite o segundo número da sequência de Fibonacci: "))
    
    while num2 < 0:
        print("Valor inválido! Digite um número maior ou igual a zero.")
        num2 = int(input("Digite o segundo número da sequência de Fibonacci: "))

    quant = int(input("Digite a quantidade de números da sequência de Fibonacci que serão mostrados: "))

    return num1, num2, quant

def calcularFibonacci(num1, num2, quant):

    print(num1)
    print(num2)

    cont = 0 

    while cont < quant:

        num3 = num1 + num2
        print(num3)

        num1 = num2
        num2 = num3

        cont = cont + 1
    

#----PROGRAMA PRINCIPAL----#

def main():

    print("Bem vindo ao programa! Digite os dois primeiros números da sequência de Fibonacci e o total de números que serão mostrados.")

    num1, num2, quant = lerNumeros()

    calcularFibonacci(num1, num2, quant)

main()
