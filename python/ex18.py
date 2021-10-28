peso = float(input("entre com seu valor de peso:"))
altura= float(input("entre com sua altura:"))
m=str
f=str
sexo=str(input("diga qual é o seu sexo:"))

imc = peso/ (altura*altura) 

if (m and (imc<20)) or (f and (imc<19)):
   print("abaixo do peso")

elif (m and (20<imc<25)) or (f and (19<imc<24)):
    print("peso ideal")
else:
    print("acima do peso")

 

