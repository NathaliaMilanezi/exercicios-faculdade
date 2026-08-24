print("atividade 5")

destino = int(input("Digite o número do destino (1 - Rio de janeiro, 2 - São Paulo, 3 - Belo Horizonte, 4 - Salvador): "))
tipodepassagem = int(input("Digite o número do tipo de passagem (1 - Ida, 2 - Ida e Volta): "))

if destino == 1 and tipodepassagem == 1:
    valor = 350

else: 
    valor = 600

if destino == 2 and tipodepassagem == 1:
    valor = 550

else:
    valor = 950

if destino == 3 and tipodepassagem == 1:
    valor = 450

else:
    valor = 800

if destino == 4 and tipodepassagem == 1:
    valor = 400

else:
    valor = 750

print("Valor da passagem: R$ %.2f" %valor)

