let = ' abcdefghijklmnopqrstuvwxyz'
dic = {}
for i in range(1,len(let)):
    pos = i+13
    pos %= len(let)-1
    o = let[pos]
    dic[let[i]] = o
dic['m'] = 'z'

pal = raw_input()
pal = pal[::-1]
resu = ''
for c in pal:
    if(c==' '):
        resu+= ' '
    else :
        resu+= dic[c]
print resu