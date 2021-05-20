h = int(raw_input())
k = int(raw_input())
rext = int(raw_input())
rint = int(raw_input())

N = int(raw_input())
for i in range(N):
	x = int(raw_input())
	y = int(raw_input())
	dc = ((x-h)**2) +  ((y-k)**2)
	if(dc >= (rint**2) and dc <= (rext**2)):
		print 'Dentro'
	else:
		print 'Fuera'