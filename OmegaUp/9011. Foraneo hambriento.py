x = int (raw_input ())
x*=8
for i in range (5):
    l = int (raw_input())
    x-=l
if x>0:
    print 'FF'
else:
    print 'FH'