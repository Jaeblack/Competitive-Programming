bra = [0]*7
vic = [0]*7
for i in range(7):
    bra[i] = int(raw_input())
for i in range(7):
    vic[i] = int(raw_input())
sem = raw_input()
sem = sem[1:]
sem = int(sem)
sem-=1
if(bra[sem] > vic[sem]):
    print 'B'
elif(bra[sem] < vic[sem]):
    print 'V'
else:
    print 'I'