import sys

def printToN(n):
    for i in range(n,0,-1):
        print(i)

if __name__=='__main__':
    n= int(sys.stdin.readline())
    printToN(n)
