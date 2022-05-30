import sys

def initialize(num, n):
    num[0] = []
    num[1] = []
    for i in range(1,n+1):
        num[0].append(i)
        num[1].append(i)
    
    return num

def findNum(num, n, k):
    for j in range(k):
        if(j%2==0):
            for i in range(1,n):
                num[1][i]=num[1][i-1]+num[0][i]
        else:
            for i in range(1,n):
                num[0][i]=num[0][i-1]+num[1][i]
    if k%2==0:
        return num[0][n-1]
    else:
        return num[1][n-1]

def init():
    T = int(sys.stdin.readline())
    num = [1,1]
    
    for i in range(T):
        k = int(sys.stdin.readline())
        n = int(sys.stdin.readline())
        num = initialize(num,n)
        print(findNum(num,n,k))
        
init()
