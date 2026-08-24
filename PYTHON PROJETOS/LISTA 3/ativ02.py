nome = input("Digite o nome do aluno: ")
nota = 0.0
somaNota = 0.0
cont = 1

#repetição para anotar as notas
while cont <= 3:
    
    nota = float(input("Digite a nota: "))
    
    #validar a nota
    while nota<0 or nota>10:
        print("Nota inválida")
        nota = float(input("Digite a nota: "))

    #ver qual é a maior e a menor nota
    if cont == 1:
        maiorNota = nota
        menorNota = nota
    
    if nota < menorNota:
        menorNota = nota
    
    if nota > maiorNota:
        maiorNota = nota
    
    somaNota = somaNota + nota
    cont = cont + 1


meio = somaNota - maiorNota - menorNota
media = somaNota / 3

if media <  6:
    print("%s está reprovado, pois sua média foi de %.2f pontos" %(nome, media))

elif media >= 7:
    print("%s está aprovado, pois sua média foi de %.2f pontos" %(nome, media))

else: 
     print("%s está na prova final, pois sua média foi de %.2f pontos" %(nome, media))

print("as notas foram: %.2f, %.2f e %.2f" %(maiorNota, meio, menorNota))