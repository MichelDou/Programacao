base = int(input("entre com a base do retangulo:"))
altura= int(input("entre com a altura do retangulo:"))

area = (base*altura)

if area>100:
    print("terreno muito grande")
else:
    print("terreno pequeno")
print("a area do retangulo e", area)