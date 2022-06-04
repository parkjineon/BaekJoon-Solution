import sys

def init():
    M, N = map(int,sys.stdin.readline().split())
    notPrime = set()
    notPrime.add(1)
    
    m = int(N**0.5) //제곱근 구하기
    for i in range(2,m+1):
        if not i in notPrime:
            for j in range(i*i, N+1, i):
                notPrime.add(j)

    for i in range(M, N+1):
        if not i in notPrime:
            print(i)
init()
