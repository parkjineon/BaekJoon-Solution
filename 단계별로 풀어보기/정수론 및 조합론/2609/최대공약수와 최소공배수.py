import sys

def init():
    a, b = map(int,sys.stdin.readline().split())
    m =  a if a < b else b
    for i in range(1, m+1):
        if a%i == 0 and b%i == 0:
            commonFactor = i

    sys.stdout.write("{}\n{}" .format(commonFactor, a*b//commonFactor))

init()
