#----LER E VÁLIDAR UM NÚMERO INTEIRO E POSITIVO PARA AS HORAS----#

def lerNumH():

    numH = input("Digite as horas: ")

    while numH.isdigit() == False:

        print("Número inteiro inválido!")
        numH = input("Digite as horas: ")

    while int(numH) > 24:

        print("Número inteiro inválido!")
        numH = input("Digite as horas: ")

    
    return int(numH)

#----LER E VÁLIDAR UM NÚMERO INTEIRO E POSITIVO PARA OS MINUTOS----#

def lerNumM():

    numM = input("Digite os minutos: ")

    while numM.isdigit() == False:

        print("Número inteiro inválido!")
        numM = input("Digite os minutos: ")

    while int(numM) > 59:

        print("Número inteiro inválido!")
        numM = input("Digite os minutos: ")
    
    
    return int(numM)

#----CONVERSÃO DA NOTAÇÃO DE 24 HORAS PARA A NOTAÇÃO DE 12 HORAS----#

def conversao(horas): 

    if horas >= 12:

        periodo = "P.M"

    else:

        periodo = "A.M"

    hora12 = horas % 12

    if hora12 == 0:

        hora12 = 12

    return int(hora12), periodo


#---------------------------------PROGRAMA PRINCIPAL---------------------------------#

while  True: 
    horas = lerNumH()
    minutos = lerNumM()

    conversao(horas)

    hora12, periodo = conversao(horas)


    print("São %d:%d %s" %(hora12, minutos, periodo))

    resp = input("Deseja continuar(s/n): ").upper()

    if resp == "S":

        True
    
    elif resp == "N": 
        
        False
        break;
        
    else:

        print("Resposta inválida!")
        resp = input("Deseja continuar(s/n): ").upper()