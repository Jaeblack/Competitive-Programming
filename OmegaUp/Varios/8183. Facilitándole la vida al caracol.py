l = int(raw_input())
x = int(raw_input())
y = int(raw_input())

d = 0
dia =0

jala = True
while(jala):
    dia+=1
    d+=x
    if(d >= l):
        print dia
        break
    d-=y
    if(d <= 0):
        print -1
        break