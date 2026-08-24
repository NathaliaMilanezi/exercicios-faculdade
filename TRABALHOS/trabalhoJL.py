#TRABALHO PYTHON + CONJUNTOS
#ALUNAS: NATHÁLIA DE OLIVEIRA MILANEZI, ANA CLARA SCHULTHAIS E BIANCA BOTAN BENVINDO
#TURMA: V04

#-------SITUAÇÃO PROBLEMA-------#

#DURANTE UMA EPIDEMIA DE UMA DOENÇA RESPIRATÓRIA, UM HOSPITAL DO SUS COMEÇOU A RECEBER UM GRANDE UM NÚMERO DE PACIENTES COM DIFERENTES SINTOMAS. PARA ORGANIZAR O ATENDIMENTO E GARANTIR QUE OS CASOS MAIS GRAVES FOSSEM ATENDIDOS PRIMEIRO, A EQUIPE MÉDICA CRIOU UM SISTEMA DE CLASSIFICAÇÃO UTILIZANDO PULSEIRAS DE CORES DIFERENTES. 

#PARA ISSO, OS PACIENTES FORAM SEPARADOS EM QUATRO CONJUNTOS: 

#-----> CONJUNTO A: PACIENTES COM FEBRE ALTA (TEMPERATURA IGUAL OU SUPERIOR A 38,5°C).
#-----> CONJUNTO B: PACIENTES COM DIFICULDADE RESPIRATÓRIA. 
#-----> CONJUNTO C: PACIENTES COM SATURAÇÃO DE OXIGÊNIO ABAIXO DE 92%
#-----> CONJUNTO D: PACIENTES QUE PERTENCEM AO GRUPO DE RISCO (IDOSOS, GESTANTES OU PESSOAS COM DOENÇAS CRÔNICAS). 

#A EQUIPE DO HOSPITAL DEFINIU AS SEGUINTES REGRAS PARA A DISTRIBUIÇÃO DAS PULSEIRAS: 

# 🔴 PULSEIRA VERMELHA (EMERGÊNCIA): PACIENTES QUE PERTENCEM AOS QUATRO CONJUNTOS AO MESMO TEMPO (A ∩ B ∩ C ∩ D). 
# 🟠 PULSEIRA LARANJA (URGENTE): PACIENTES QUE PERTENCEM A TRÊS DOS QUATRO CONJUNTOS. 
# 🟡 PULSEIRA AMARELA (URGENTE): PACIENTES QUE APRESENTAM DOIS CRITÉRIOS RELACIONADOS À MAIOR GRAVIDADE, ENVOLVENDO DIFICULDADE RESPIRATÓRIA E/OU BAIXA SATURAÇÃO.
# 🟢 PULSEIRA VERDE (POUCO URGENTE): PACIENTES QUE APRESENTAM DOIS CRITÉRIOS CONSIDERADOS MAIS LEVES. 
# 🔵 PULSEIRA AZUL (NÃO URGENTE): PACIENTES QUE PERTENCEM A APENAS UM CONJUNTO. 

#DURANTE A TRIAGEM, OS MÉDICOS REGISTRAM AS INFORMAÇÕES DE ALGUNS PACIENTES. A PARTIR DESSES DADOS, A EQUIPE PRECISA IDENTIFICAR A QUAIS CONJUNTOS CADA PACIENTE PERTENCE E DECIDIR QUAL PULSEIRA DE ATENDIMENTO DO SUS DEVE RECEBER. 

#PROBLEMA: COMO UTILIZAR A RELAÇÃO ENTRE CONJUNTOS E SUAS INTERSECÇÕES PARA CLASSIFICAR CORRETAMENTE OS PACIENTES E DETERMINAR A PIORIDADE DE ATENDIMENTO DE CADA UM? 

#-----SISTEMA HOSPITALAR-----#

def menu():
    op = ""
    while op.isdigit() == False or int(op) < 0 or int(op) > 6:

        print("\n" * 2)
        print("SISTEMA HOSPITALAR")
        print()
        print("Defina os sintomas do seu paciente:")
        print("1- Febre alta - temperatura igual ou superior a 38.5°C")
        print("2- Dificuldade respiratória")
        print("3- Saturação de oxigênio abaixo de 92%")
        print("4- Pertence ao grupo de riscos (idosos, gestantes, doenças crônicas ou crianças)")
        print("0-Sair")
        op = input("Escolha sua opção: ")
    return int(op)

#------------LER NOME------------#

def lerNome():
    nome = input("Nome do paciente: ")
    while nome.replace(" ","").isalpha() != True:  
        print("Nome inválido!")
        nome = input("Nome do paciente: ")
    return nome

#------------CADASTRAR O PACIENTE------------#

def cadastrarPaciente(A, B, C, D):

    nome = lerNome()
    opcao = menu()

    while opcao != 0: 
        if opcao == 1:
            A.add(nome)
            print(f"O paciente {nome} está com febra alta.")

        elif opcao == 2:
            B.add(nome)
            print(f"O paciente {nome} está com dificuldade respiratória.")

        elif opcao == 3: 
            C.add(nome)
            print(f"O paciente {nome} está com saturação de oxigênio abaixo de 92%.")

        elif opcao == 4: 
            D.add(nome)
            print(f"O paciente {nome} pertence ao grupo de risco.")

        else: 
            print("Opção inválida")

        opcao = menu()

    print(f"{nome}")

    return nome

#------------DEFINIÇÃO DA PULSEIRA------------#

def definP(nome,A, B, C, D):

    pertence = set()
    if nome in  A: pertence.add('A')
    if nome in  B: pertence.add('B')
    if nome in  C: pertence.add('C')
    if nome in  D: pertence.add('D')

    if nome in (A & B & C & D):
        return 'vermelho'
    elif len(pertence) == 3: 
        return 'laranja'
    elif (len(pertence) == 2 and pertence & {'B', 'C'}):
        return 'amarelo'
    elif len(pertence) == 2: 
        return 'verde'
    elif len(pertence) == 1:
        return 'azul'    

#------------DESEJA CONTINUAR------------#

def continuarF(): 

    continuar = input("Deseja continuar (S/N)?: ").upper()

    while (continuar != 'S') and (continuar != 'N'):
        print("Opção inválida")
        continuar = input("Deseja continuar (S/N)?: ").upper()

    return continuar
   
#-----PRINCIPAL-----#
def main():

    A = set()
    B = set()
    C = set()
    D = set()

    continuar = 'S'

    while (continuar == "S"):

        nome = cadastrarPaciente(A, B, C, D)
        pulseira = definP(nome, A, B, C, D)
        print(f"{nome} -> pulseira {pulseira}")

        continuar = continuarF()

main()
