import sys

def calculateCount(N):
    if N%5==0:
        return N//5
    elif N%5==1:
        if((N-6) < 0):
            return -1
        return (N-6)//5 + 2
    elif N%5==2:
        if((N-12) < 0):
            return -1
        return (N-12)//5 + 4
    elif N%5==3:
        if((N-3) < 0):
            return -1
        return (N-3)//5 + 1
    else:
        if((N-9) < 0):
            return -1
        return (N-9)//5 + 3

def init():
    N = int(sys.stdin.readline())
    print(calculateCount(N))

init()
