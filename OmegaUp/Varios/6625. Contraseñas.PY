especiales = '\"#$%&\'()*+,-./:;<=>?@'
mayusculas = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
minusculas = 'abcdefghijklmnopqrstuvwxyz'
numeros = '1234567890'

for i in range(3):
	pala = raw_input()
	mayoraocho = 0
	tieneMay = 0
	tienemin = 0
	tieneesp = 0
	sinespacios = 1
	tieneNumes = 0
	total = 0
	if(len(pala) >= 8):
		mayoraocho = 1
	for c in pala:
		if(c == ' '):
			sinespacios = 0
		if(c in mayusculas):
			tieneMay = 1
		if(c in minusculas):
			tienemin = 1
		if(c in numeros):
			tieneNumes = 1
		if(c in especiales):
			tieneesp = 1
	total = sinespacios + tieneMay + tienemin + tieneNumes + tieneesp + mayoraocho
	"""print 'mayor a 8: ' + str(mayoraocho)
	print 'mayusculas: ' + str(tieneMay)
	print 'minusculas: ' + str(tienemin)
	print 'especiales: ' + str(tieneesp)
	print 'sinespacios: ' + str(sinespacios)
	print 'numeros: ' + str(tieneNumes)
	print 'total: ' + str(total) """
	print pala 
	if(total == 6):
		print 'Cumple'
	elif(total >= 4):
		print 'Casi cumple'
	else :
		print 'No no no'