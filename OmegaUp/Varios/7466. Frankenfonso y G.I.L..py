x1 = int(raw_input())
y1 = int(raw_input())
x2 = int(raw_input())
y2 = int(raw_input())
cosa = raw_input()
inst = ' '
inst += cosa


salto = 0
jala = True

for i in range(1,len(inst)):
	xa = x1
	ya = y1
	for j in range(1,len(inst)):
		c = inst[j]
		if(c == 'U'  and  j%i != 0):
			ya+=1
		elif(c == 'D' and  j%i != 0):
			ya-=1
		elif(c == 'L' and  j%i != 0):
			xa -= 1
		elif(c == 'R' and  j%i != 0):
			xa += 1
		elif(c == 'D'  and  j%i == 0):
			ya+=1
		elif(c == 'U' and  j%i == 0):
			ya-=1
		elif(c == 'R' and  j%i == 0):
			xa -= 1
		elif(c == 'L' and  j%i == 0):
			xa += 1
	if(ya == y2 and xa == x2):
		salto = i
		jala = False
	if jala == False:
		break
print salto