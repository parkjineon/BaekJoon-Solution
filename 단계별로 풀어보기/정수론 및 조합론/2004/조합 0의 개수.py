import sys

def func(n, x):
    num = 0
    i = x
    while n//i >= 1:
        num = num + n//i
        i = i*x

    return num

def init():
    n, m = map(int,sys.stdin.readline().split())

    two = func(n, 2) - func(n-m, 2) - func(m, 2)
    five = func(n, 5) - func(n-m, 5) - func(m, 5)
    
    sys.stdout.write('%d' %(min(two,five)))
    
init()
