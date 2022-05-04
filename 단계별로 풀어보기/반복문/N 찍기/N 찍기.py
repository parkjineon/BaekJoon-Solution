import sys

def printToN(n):
    for i in range(1,n+1):
        print(i)

if __name__=='__main__':
    n= int(sys.stdin.readline())
    printToN(n)
