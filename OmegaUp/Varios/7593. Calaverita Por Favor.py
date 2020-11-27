una = raw_input()
dos = raw_input()

dic = 'aeiou'
cuno = 0
cdos = 0

for i in una:
    if(i in dic):
        cuno+=1
for i in dos:
    if(i in dic):
        cdos+=1
if(cuno == cdos):
    print 'Empate'
elif(cuno > cdos):
    print 'Miguel'
else:
    print 'Ricardo'