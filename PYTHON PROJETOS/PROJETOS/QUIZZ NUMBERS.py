#---------Quizz para aprender a escrever os números de 0 a 100 em inglês----------#

import random

#------lista de números em inglês-------#

numeros = {0: "zero", 1: "one", 2: "two", 3: "three", 4: "four", 5: "five", 6: "six", 7: "seven", 8: "eight", 9: "nine", 10: "ten",
           11: "eleven", 12: "twelve", 13: "thirteen", 14: "fourteen", 15: "fifteen", 16: "sixteen", 17: "seventeen",
           18: "eighteen", 19: "nineteen", 20: "twenty", 30: "thirty", 40: "forty", 50: "fifty", 60: "sxty", 70:"seventy",
           80: "eighty", 90: "ninety", 100: "one hundred"}


#------função para gerar um número aleatório entre 0 e 100-------#

def gerarNumero():

    return random.randint(0, 100)

#------função para o quizz-------#

def quizz():

    numero = gerarNumero()

    resposta = 