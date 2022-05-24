import sys

def init():
    T=int(sys.stdin.readline())
    
    for i in range(T):
        S, word=sys.stdin.readline().split()
        for j in word:
            print(j*int(S), end='')
        print()
        
init()
