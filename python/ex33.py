print('Lista de numeros de 1 a 10 inversa')
 
numeros = []
 
for i in range(9, -1, -1):
    n = int(input('Digite os numeros: '))
    numeros.append(n)
 
print('Os numeros são:')
 
for i in range(9, -1, -1):
    print(numeros[i])