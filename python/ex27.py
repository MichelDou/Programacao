print('Tabuada com intervalo')
 
num = int(input("Digite um numero para obter a tabuada: "))
inter= int(input("digite o intervalo da tabuada:"))

while(num <= 0):
    print("Não pode numero negativo!")
    num = int(input("Digite um outro numero para obter a tabuada: "))
while(inter<num):
    print("numero não aceito, deve ser maior que o pedido")    
    inter= int(input("digite o intervalo da tabuada:"))

i = 1
 
for i in range(inter, num,-1 ):
    r = num * i
    print(f'{num} X {i} = {r}')    