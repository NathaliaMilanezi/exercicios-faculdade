#LISTA 04 - ATIV 02

num = int(input("Digite um número inteiro: "))

divisor = 1
divisores = 0

while divisor <= num:
    resto = num % divisor
    
    if resto == 0:
       print("O número %d é divisor de %d" %(divisor, num))
       divisores = divisores + 1

    divisor = divisor + 1

print("O número %d tem %d divisores" %(num, divisores)) 

if divisores == 2:
    print("Portanto o número %d é primo" %(num))

else:
    print("Portanto o número %d não é primo" %(num))