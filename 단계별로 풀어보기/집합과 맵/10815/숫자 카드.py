import sys
    
def init():
    N = int(sys.stdin.readline())
    sanggeun = set(map(int, sys.stdin.readline().split()))

    M = int(sys.stdin.readline())
    for i in list(map(int, sys.stdin.readline().split())):
        if i in sanggeun:
            sys.stdout.write('1 ')
        else:
            sys.stdout.write('0 ')
                 
init()
