print('imprimir o maior de 10 numeros')
 
numeros = []
maior=0
result=0

for i in range(0, 3, 1):
     
     n = int(input('Digite os numeros: '))
     numeros.append(n)

     

mult=int(input("digite o numero multiplicativo:"))
        
print('Os resultados são:')
for i in range(0, 3, 1):
      
    print(numeros[i]*mult)