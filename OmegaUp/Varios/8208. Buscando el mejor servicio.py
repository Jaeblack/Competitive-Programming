m = ['Spotify','Apple Music','YouTube Music']

a = raw_input()
b = raw_input()

c = raw_input()

a = len(a)
b = len(b)
c = len(c)

if(a > b and a >c):
    print m[0]
elif(b > a and b > c):
    print m[1]
else:
    print m[2]