#determinar o máximo divisor de dois números inteiros positivos 

num1 = int(input("Digite o primeiro número inteiro positivo: "))
num2 = int(input("Digite o segundo número inteiro positivo: "))

divisor = 1
mdc = 0 

#são vão ser dividos quando der resto 0 nos dois, o programa
#vai ficar acumulando divisores até chegar no maior comum dos dois

while divisor <= num1 and divisor <= num2:

    if num1 % divisor == 0  and num2 % divisor == 0:
        mdc = divisor

    divisor = divisor + 1

print("O maior divisor comum dos números %d e %d é %d" %(num1, num2, mdc))