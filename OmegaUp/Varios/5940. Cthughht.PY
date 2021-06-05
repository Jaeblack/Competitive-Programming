x = int(raw_input())
abe = 'obdjkx'
dic = {'o':'\'', 'b':'h' , 'd':'g l\'w' , 'j':' Cthughht\'' ,'k':' Cthughht\'' , 'x':' Cthughht\''}
for i in range(x):
	pala = raw_input()
	otra = pala[::-1]
	res = ''
	for c in otra:
		if(c in abe):
			res+= dic[c]
		else:
			res+= c
	print res