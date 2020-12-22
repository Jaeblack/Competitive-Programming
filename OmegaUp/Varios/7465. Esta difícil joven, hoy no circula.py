x = int(raw_input())
pares = 0
impares = 0
for i in range(x):
    carro = int(raw_input())
    if(carro%2 == 0):
        pares+=1
    else:
        impares+=1
dia = int(raw_input())
multa = int(raw_input())
if(dia%2== 0):
    multa*=impares
else:
    multa*= pares
print multa