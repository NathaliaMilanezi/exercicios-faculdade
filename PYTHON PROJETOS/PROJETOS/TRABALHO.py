### EXEMPLO PARA O TRABALHO

def menu() :
    
    op = ""
    while op.isdigit() == False or int(op) < 0 or int(op) > 6:

        print("\n" * 130)        
        print("PEDIDO DE RESTAURANTE")
        print()
        print("1-Inserir mesa")
        print("2-Pesquisar por código")
        print("3- Inserir pedido")
        print("4-Maior total")
        print("5-Excluir mesa")
        print("6-Listar mesas")
        print("0-Sair")
        op = input("Escolha sua opção: ")
    return int(op)

#-----PESQUISAR-----#

def pesquisar (vetorMesa, pesq):
    i = 0
    while i < len(vetorMesa):
        if vetorMesa[i] == pesq:
            return i
        i = i + 1
    
    return -1   

#-----INSERIR MESA-----#

def inserirMesa(vetorMesa, vetorPedido):

    cod = input("Digite o código da mesa (1 - 20): ")

    while (cod.isdigit() == False) or (int(cod) < 1) or (int(cod) > 20):

        print("Código Inválido!!")
        cod = input("Digite o código da mesa (1 - 20): ")

    resultado = pesquisar(vetorMesa, cod)

    if resultado == -1:
        vetorMesa.append (cod)
        vetorPedido.append (0.0)
    
    else:
        print("Mesa cadrastada")

#-----PESQUISAR PARA PAGAR-----#

def pesquisarPagar(vetorMesa, vetorPedido):

    cod = input("Digite o código da mesa para o pagamento: ")

    valor = pesquisar(vetorMesa, cod)

    while valor == -1:
        
        print("Código inválido")
        cod = input("Digite o código da mesa para o pagamento: ")
        valor = pesquisar(vetorMesa, cod)

    print("Mesa código %s: R$ %.2f" %(cod, vetorPedido[valor]))

#-----INSERIR PEDIDO-----#

def inserirPedido(vetorMesa, vetorPedido):

    cod = input("Digite o código da mesa para o adicionar o pedido: ")
    ind = pesquisar(vetorMesa, cod)

    while ind == -1:
        print("Mesa não encontrada!")
        cod = input("Digite o código da mesa para o adicionar o pedido: ")
        ind = pesquisar(vetorMesa, cod)

    valor = float(input("Insira o valor do pedido: R$ "))
    vetorPedido[ind] = vetorPedido[ind] + valor
    print("Pedido adicionado! Total da mesa %s: %.2f" %(cod, vetorPedido[ind]))

#-----MAIOR TOTAL-----#

def maiorTotal(vetorMesa, vetorPedido):

    maiorTotal = 0 
    indMaior = 0 
    cont = 0 

    while cont < len(vetorPedido):

        if vetorPedido[cont] > maiorTotal:

            maiorTotal = vetorPedido[indMaior]
            indMaior = cont
        
        cont = cont + 1

    print("A mesa com maior total: código %d, R$ %.2f" %(vetorMesa[indMaior], maiorTotal))    
    
#-----EXCLUIR MESA-----#

def excluir(vetorMesa, vetorPedido):
    cod = input("Digite o código da mesa para excluir: ")
    pos = pesquisar(vetorMesa, cod)
    if pos >= 0:
        del ( vetorMesa[pos] )
        del ( vetorPedido[pos] )
        print("Mesa %s excluída!"  %cod )
    else:
        print("Mesa não encontrada")

#-----LISTAR MESAS-----#

def imprimir(vetorMesa, vetorPedido):
    i = 0
    while i < len(vetorMesa) :
        
        print("Mesa %s: R$ %.2f" %(vetorMesa[i], vetorPedido[i]))        
        i = i + 1

#-----PROGRAMA PRINCIPAL-----#

def main():
    
    vetorMesa = []
    vetorPedido = []

    op = 1
    while op != 0:
        op = menu()
        
        if op == 0:
            print("Fim do programa!!!")
            
        elif op == 1:

            # Inserir mesa
            print("INSERIR MESA")
            inserirMesa(vetorMesa, vetorPedido)

            
        elif op == 2:
           
            # Pesquisar a mesa para pagar
            print("PESQUISAR")
            pesquisarPagar(vetorMesa, vetorPedido)
           

        elif op == 3:
            
            # Inserir pedido
            print("INSERIR PEDIDO")
            inserirPedido(vetorMesa, vetorPedido)


        elif op == 4:

            # Maior total
            print("MAIOR TOTAL")
            maiorTotal(vetorMesa, vetorPedido)


        elif op == 5:
            
            # Excluir a mesa
            print("EXCLUIR MESA")
            excluir(vetorMesa, vetorPedido)


        elif op == 6:
            print("LISTAR MESAS")
            imprimir(vetorMesa, vetorPedido)


        else:
            print("Opção inválida!")

        input("Pressione <enter> para continuar ...")
    
main()
