print("atividade 3")

nota1 = float(input("Digite a primeira nota do aluno: "))
nota2 = float(input("Digite a segunda nota do aluno: "))

media = (nota1 + nota2)/2

print("A média do aluno foi %.2f" %media)

if 9>= media >= 7: 
    print("Aluno aprovado")

elif media < 7: 
    print("Aluno reprovado")

else:
    print("Aluno aprovado com distinção")