"""O programa abaixo calcula a área das figuras geométricas retângulo e círculo. Implemente as quatro funções que estão faltando e complete as quatro 
funçõs que estão faltando e complete as lacunas do programa principal para que ele execute corretamente.
a - A área do retângulo é: base * altura
b - A área do círculo é: PI * raio^2
c - O tamanho de cada informação (base, altura e raio) deve ser maior que zero.
d - A opção a ser lida deve ser 0, 1 e 2."""

import math

#----LER OPÇÃO----#

def lerOpcao():

    print("Olá usuário! Escolha a opção desejada para calcular a área da figura geométrica!")
    print("1 - Retângulo")
    print("2 - Círculo")
    print("0 - Sair")

    opc = int(input("Digite a opção: "))

    while opc < 0 or opc > 2:
        print("Opção inválida! Digite uma opção entre 0 e 2.")
        opc = int(input("Digite a opção: "))

    while opc == 0:
        print("Programa encerrado!")
        return "sair"
        
    if opc == 1:
        print("Você escolheu a opção Retângulo!")
        return "retângulo"
    
    elif opc == 2:
        print("Você escolheu a opção Círculo!")
        return "círculo"

#----LER MEDIDAS----#

def lerMedidas(opc):
    
    if opc == "retângulo":
        base = float(input("Digite a base do retângulo:"))

        while base <=0: 
            print("Valor inválido! Digite um valor maior que zero.")
            base = float(input("Digite a base do retângulo:"))
        
        altura = float(input("Digite a altura do retângulo: "))

        while altura <= 0:
            print("Valor inválido! Digite um valor maior que zero.")
            altura = float(input("Digite a altura do retângulo: "))
    
        return base, altura
    
    if opc == "círculo":
        raio = float(input("Digite o raio do círculo:"))

        while raio <= 0:
            print("Valor inválido! Digite um valor maior que zero.")
            raio = float(input("Digite o raio do círculo: "))

        return raio
#----CALCULAR ÁREA----#

def calcularArea(opc, medidas):

    if opc == "retângulo":
        base, altura = medidas
        area = base * altura
        print("A área do retângulo é: %.2f" %area)
    
    if opc == "círculo":
        raio = medidas
        area = math.pi * (raio ** 2)
        print("A área do círculo é: %.2f" %area)

#----PROGRAMA PRINCIPAL----#

def main():
    while True:
        
        opc = lerOpcao()
        
        while opc == "sair":
            return False
        
        medidas = lerMedidas(opc)
        calcularArea(opc, medidas)

main()



