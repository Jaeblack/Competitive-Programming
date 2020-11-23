n= int(raw_input())
pobTot=0

for i in range(n):
  pobTot += int(raw_input())

pobTot/=n
if (pobTot < 10000):
	print 'M'
elif (pobTot > 20000):
	print 'R'
else:
	print 'T'