import sys

def makePrimeSet():
    primeSet = set()
    notPrime = set()
    notPrime.add(1)

    for i in range(2,100+1):
        if not i in notPrime:
            for j in range(i*i, 10000+1, i):
                notPrime.add(j)

    for i in range(2, 10000+1):
        if not i in notPrime:
            primeSet.add(i) 

        
    return primeSet


def init():
    primeSet = makePrimeSet()
    T = int(sys.stdin.readline())

    for i in range(T):
        n = int(sys.stdin.readline())
        
        for j in range(10000): //set은 순서가 없음
            if not j in primeSet:
                continue
            if j > n-j:
                break
            if n-j in primeSet:
                a = j
                b = n-j
                
        print(a,b)
        
init()
