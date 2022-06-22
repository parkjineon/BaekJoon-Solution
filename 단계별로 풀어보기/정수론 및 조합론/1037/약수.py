import sys

def init():
    N = int(sys.stdin.readline())
    factor = list(map(int,sys.stdin.readline().split()))
    m1 = factor[0]
    m2 = factor[0]
    for i in factor:
        if m1 > i:
            m1 = i
        if m2 < i:
            m2 = i
    sys.stdout.write("{}" .format(m1*m2))
    
init()
