print('Tabuada do 1 ao 20')
 
num = int(input("Digite um numero para obter a tabuada: "))
 
while(num !=1):
 num = int(input("Digite um numero para obter a tabuada: "))

for i in range(1, 21, 1):
    r = num * i
    print(f'{num} X {i} = {r}')