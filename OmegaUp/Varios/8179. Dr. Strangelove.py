n = int(raw_input())
prom = 0
for i in range(n):
	prom += float(raw_input())
prom /= n 
probabilidad = 0
if (prom <=6):
    probabilidad = (prom**2)/60
else:
    probabilidad = 1 -( ((10-prom)**2)/40)
	
 
print round(probabilidad,3)