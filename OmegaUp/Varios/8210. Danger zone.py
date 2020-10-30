n = int(raw_input())
prom = 0
divo = n
cals = [0]*(n+3)

for i in range(n):
    cals[i] = float(raw_input())
mino = float(raw_input())

for i in range(n):
    if(cals[i] > mino):
        prom+= cals[i]
    else:
        divo-=1
if(divo!=0):
    prom /= divo
print round(prom,1)