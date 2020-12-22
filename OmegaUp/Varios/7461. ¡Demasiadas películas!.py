awanta = int(raw_input())
x = int(raw_input())
total = 0
for i in range(x):
	n = int(raw_input())
	total+=n
if(total <= awanta):
	print 'SI'
else:
	print 'NO'