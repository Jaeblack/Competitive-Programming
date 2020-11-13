n = int(raw_input())
abe = 'abcdefghijklmnopqrstuvwxyz'
dic = {}
cua = 0
for c in abe:
    dic[c] = 0
pals = [0]*(n)
for i in range(n):
    pals[i] = raw_input()
    dic[pals[i][0]] += 1

for i in range(n):
    jala = True
    pala = pals[i]
    otro = {}
    for l,m in dic.items():
        otro[l] = m
    otro[pala[0]] -= 1
    for ca in pala:
        if(otro[ca] > 0):
            otro[ca] -= 1
        else:
            jala = False
            break
    if(jala):
        cua+=1
print cua