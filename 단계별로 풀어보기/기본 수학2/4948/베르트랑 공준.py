import sys

def makeNotPrimeSet():
    notPrime = set()
    notPrime.add(1)

    for i in range(2,123456*2+1):
        if not i in notPrime:
            for j in range(i*i, 123456*2+1, i):
                notPrime.add(j)
                
    return notPrime


def init():
    notPrime = makeNotPrimeSet()
    n = int(sys.stdin.readline())
    
    while n != 0:

        cnt = 0
        for i in range(n+1, 2*n+1,1):
            if not i in notPrime:
                cnt += 1
        print(cnt)
        n = int(sys.stdin.readline())
        
init()
