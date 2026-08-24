print("atividade 10")

quantCig = int(input("Diga quantos cigarros você fuma por dia: "))
anosF = float(input("Agora diga a quantos anos você fuma: "))

minutos = quantCig * 10 * (anosF * 365)
diasP = minutos / 1440

print("Com essas quantidades você perde %.2f dias de vida" %diasP)
