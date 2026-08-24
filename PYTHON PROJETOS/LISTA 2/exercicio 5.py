print("atividade 5")

n1 = float(input("Digite o primeiro número: "))
n2 = float(input("Digite o segundo número: "))
n3 = float(input("Digite o terceiro número: "))

#número maior
if n1>=n2 and n1>=n3: 
    maior = n1

elif n2>=n1 and n2>=n3:
    maior = n2

else:
    maior = n3

#número menor
if n1<=n2 and n1<=n3:
    menor = n1

elif n2<=n1 and n2<=n3: 
    menor = n2

else:
    menor = n3

#ordem decrescente
if n1 == maior and n2 == menor:
    print("%.2f, %.2f e %.2f" %(n1, n3, n2))

elif n2 == maior and n1 == menor:
    print("%.2f, %.2f e %.2f" %(n2, n3, n1))

elif n3 == maior and n2 == menor:
    print("%.2f, %.2f e %.2f" %(n3, n1, n2))

elif n3 == maior and n1 == menor:
    print("%.2f, %.2f e %.2f" %(n3, n2, n1))

elif n1 == maior and n3 == menor:
    print("%.2f, %.2f e %.2f" %(n1, n2, n3))

else:
    print("%.2f, %.2f e %.2f" %(n2, n1, n3))