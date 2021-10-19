lado1 = float(input("entre com o valor 1:"))
lado2 = float(input("entre com o valor 2:"))
lado3 = float(input("entre com o valor 3:"))



if ((lado1*lado1)+(lado2*lado2)== lado3*lado3 or (lado1*lado1)+(lado3*lado3)== lado2*lado2 or (lado2*lado2)+(lado3*lado3)== lado1*lado1):
    print("é triangulo retangulo")
else:
    print("nao e trianhulo retangulo")    