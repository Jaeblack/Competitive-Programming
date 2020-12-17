cosa = raw_input()
cosa = cosa[::-1]
pote = 1
numero = 0
for i in cosa:
    if(i == '1'):
        numero += pote
    pote*=2
print numero