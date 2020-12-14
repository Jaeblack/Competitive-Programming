x = int(raw_input())
pasa = True
palabras = 0
dos = raw_input()
una = dos.split(' ')
palabras = len(una)
for c in una:
    if(c == ''):
        palabras-=1

for i in range(x-1):
    aaa = raw_input()
    pal = aaa.split(' ')
    canta = len(pal)
    for x in pal:
        if(x ==''):
            canta-=1
    if(canta != palabras ):
        pasa = False


if(pasa == True):
    print 'Pasa'
else:
    print 'No pasa'