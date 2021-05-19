ganador = 0
puntos = -1
suma = 0
for i in range(3):
	x = int(raw_input())
	suma += (x*(i+1))
if(suma > puntos):
	puntos = suma
	ganador = 1
	
suma = 0
for i in range(3):
	x = int(raw_input())
	suma += (x*(i+1))
if(suma > puntos):
	puntos = suma
	ganador = 2
	
suma = 0
for i in range(3):
	x = int(raw_input())
	suma += (x*(i+1))
if(suma > puntos):
	puntos = suma
	ganador = 3
	
if(ganador == 1):
	print 'Gatica'
elif(ganador == 2):
	print 'Alexander'
else:
	print 'Brandon'