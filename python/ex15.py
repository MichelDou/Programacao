peso = float(input("digite o seu peso:"))
altura = float(input("digite a sua altura:"))

imc = peso/(altura*altura)

if imc<20:
   print ("abaixo do peso")
if 20<=imc<25:
    print("peso ideal")
else:
    print("acima do peso")  

    print(f"seu imc e: {imc:.2f}")