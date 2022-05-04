import sys

def printStars(N):
    for i in range(1,N+1):
        print('*'*i)
    return 0

if __name__=='__main__':
    N=int(sys.stdin.readline())
    printStars(N)
