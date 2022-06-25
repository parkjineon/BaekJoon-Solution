import sys

def init():
    N, K = map(int,sys.stdin.readline().split())
    m1, m2 = 1, 1
    for i in range(1, K+1):
        m1 *= i
        m2 *= N-i+1
    sys.stdout.write("{}" .format(m2//m1))
                
init()
