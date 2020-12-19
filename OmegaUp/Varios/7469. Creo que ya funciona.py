pal = raw_input()
cant = 0
per = '10'
for c in pal:
	if(c not in per):
		cant+=1
if(cant > 0):
	print '10101'
else:
	print pal