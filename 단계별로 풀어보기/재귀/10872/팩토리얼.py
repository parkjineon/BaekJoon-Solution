 import sys

def init():
    N = int(sys.stdin.readline())
    
    if N == 0:
        print(1)
        return 0
    
    for i in range(N-1,0,-1):
        N = N * i

    print(N)

    return 0

init()
