print("atividade 8")

nomeAtleta = input("Diga o nome do atleta: ")

nt1 = float(input("Diga sua primeira nota: "))
nt2 = float(input("Diga a sua segunda nota: "))
nt3 = float(input("Diga a sua terceira nota: "))
nt4 = float(input("Diga a sua quarta nota: "))
nt5 = float(input("Diga a sua última nota: "))

if nt1>nt2 and nt1>nt3 and nt1>nt4 and nt1>nt5:
    maior = nt1
    print("nota 1 eliminada por ser a maior")

elif nt2>nt1 and nt2>nt3 and nt2>nt4 and nt2>nt5:
    maior = nt2
    print("nota 2 eliminada por ser a maior")

elif nt3>nt1 and nt3>nt2 and nt3>nt4 and nt3>nt5:
    maior = nt3
    print("nota 3 eliminada por ser a maior")

elif nt4>nt1 and nt4>nt2 and nt4>nt3 and nt4>nt5:
    maior = nt4
    print("nota 4 eliminada por ser a maior")

else: 
    maior = nt5
    print("nota 5 eliminada por ser a maior")


if nt1<nt2 and nt1<nt3 and nt1<nt4 and nt1<nt5:
    menor = nt1
    print("nota 1 eliminada por ser a menor")   

elif nt2<nt1 and nt2<nt3 and nt2<nt4 and nt2<nt5:
    menor = nt2
    print("nota 2 eliminada por ser a menor")       

elif nt3<nt1 and nt3<nt2 and nt3<nt4 and nt3<nt5:
    menor = nt3
    print("nota 3 eliminada por ser a menor")

elif nt4<nt1 and nt4<nt2 and nt4<nt3 and nt4<nt5:
    menor = nt4
    print("nota 4 eliminada por ser a menor ")

else:
    menor = nt5
    print("nota 5 eliminada por ser a menor ")

media = (nt1 + nt2 + nt3 + nt4 + nt5 - maior - menor) / 3 

print("A média do atleta", nomeAtleta, "foi de %.2f" %media, "e sua nota maior foi %.2f" % maior, "e a menor foi %.2f" % menor)

