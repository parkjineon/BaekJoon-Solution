import sys

def init():
    T = int(sys.stdin.readline())
    
    for i in range(T):
        a, b = map(int,sys.stdin.readline().split())
        for j in range(1,a+1):
            if a%j==0 and b%j==0:
                cnt = j
        sys.stdout.write("{}\n" .format(a*b//cnt))
                
init()
