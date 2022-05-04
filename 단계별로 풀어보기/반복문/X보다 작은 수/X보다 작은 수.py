import sys

def compareElm(tempList,X):
    for i in range(len(tempList)):
        if(tempList[i]<X):
            print(str(tempList[i]),end=' ')
    
    return 0

def makeList(N):
    
    return list(map(int,sys.stdin.readline().split()))
        

if __name__=='__main__':
    N, X = map(int,sys.stdin.readline().split())
    
    compareElm(makeList(N),X)
