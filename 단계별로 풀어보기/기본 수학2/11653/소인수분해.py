import sys

def init():
    N = int(sys.stdin.readline())

    for i in range(2,N+1):
        while N%i == 0:
            print(i)
            N = N//i

    return 0
    
init()
