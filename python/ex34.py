print('imprimir o maior de 10 numeros')
 
numeros = []
maior=0


for i in range(0, 10, 1):

     n = int(input('Digite os numeros: '))
     numeros.append(n)

     if (numeros[i] > maior):
         maior = numeros[i]
        
print('O numero maior é o:')
for i in range(0, 1, 1):
      
    print(maior)