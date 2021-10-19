p1 = float(input("digite o valor do produto 1:"))
p2 = float(input("digite o valor do produto 2:"))
p3 = float(input("digite o valor do produto 3:"))
p4 = float(input("digite o valor do produto 4:"))
p5 = float(input("digite o valor do produto 5:"))

pagamento = float(input("informe o valor pago:"))

troco = pagamento-(p1+p2+p3+p4+p5)

print("o seu troco vai ser:", troco, "reais")