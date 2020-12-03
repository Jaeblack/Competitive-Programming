letras = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz'

pal = raw_input()
for c in pal:
    if(c in letras):
        print 'Letra'
    else:
        print 'No letra'