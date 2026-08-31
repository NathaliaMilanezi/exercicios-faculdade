
#----FUNÇÃO A----#

def p3FuncaoA(v,n):

    i = 1

    while i < n:

        v.append(v[i-1] + v[i])
        i = i + 1

#----FUNÇÃO B----#

def p3FuncaoB(v):

    i = 0 
    while i < len(v):
        print(v[i])
        i = i + 1

#----PRINCIPAL----#

vetNum = []

x = int (input("Número 1: "))
y = int (input("Número 2: "))

vetNum.append(x)
vetNum.append(y)

p3FuncaoA(vetNum, 5)
p3FuncaoB(vetNum)