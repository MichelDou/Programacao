print("exibir os 30 primeiros numeros da serie fibonacci")



f1=0
f2=1
i=0


for  i in range(1,30,1):

    fn=f1+f2
    print(f'{i} , {fn} ')


    f1=f2
    f2=fn

print("valew!")