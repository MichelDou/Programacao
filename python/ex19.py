velo= float(input("Digite a velocidade inicial V0:"))
acelera = float(input("entre com o valor de aceleracao em m/s:"))
tempo= float(input("Digite o tempo de percurso:"))

v=((velo+acelera*tempo)*3,6)

if (v<=40):
    print("veiculo muito lento")

elif(40<v<60):
    print("velocidade permitida")
elif(60<v<80):
    print("velocidade de cruzeiro")  
elif(80<v<120):
    print("veiculo rapido")    
else:
    print("veiculo muito rapido")          
