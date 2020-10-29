n = int(raw_input())
pag = {}
for i in range(n):
    p = raw_input()
    pag[p] = 0
m = int(raw_input())
for i in range(m):
    p = raw_input()
    mi = int(raw_input())
    pag[p]+=mi
k = int(raw_input())
suma =0
for i in range(k):
    p = raw_input()
    suma += pag[p]
print suma