#populações

populacaoA = 80000
populacaoB = 200000

anos = 0 

#sempre que a população A for menor que a B as contas vão ser feitas
while populacaoA < populacaoB:

    populacaoA = populacaoA * 1.03
    populacaoB = populacaoB * 1.015

    anos = anos + 1

print("Anos necessários para elas serem iguais: %i " %anos)
