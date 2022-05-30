import sys

def init():
    T = int(sys.stdin.readline())
    
    for i in range(T):
        H, W, N = map(int, sys.stdin.readline().split())
        if N%H == 0:
            print(H*100+N//H)
        else:
            print((N%H)*100+(N//H+1))
            
    return 0
    
init()
