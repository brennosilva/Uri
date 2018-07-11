# -*- coding: utf-8 -*-
def mdc(x,y):
    if (x == 0):
        return y
    return mdc(y%x,x)
n = int(input())
x = int()
while(x < n):
    entrada = input()
    entrada = entrada.split()
    entrada = list(map(int,entrada))
    f1 = entrada[0]
    f2 = entrada[1]
    print(mdc(f1,f2))
    x += 1 