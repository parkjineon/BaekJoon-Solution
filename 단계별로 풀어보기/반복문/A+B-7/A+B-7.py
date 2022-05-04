import sys

def printEachResult(caseList):
    for i in range(len(caseList)):
        print("Case #%d: %d" %(i+1,caseList[i]))

def addEachCase(a,b,caseList):
    caseList.append(a+b)
    return caseList
    
def makeCaseList(T):
    caseList=[]
    for i in range(0,T):
        a, b= map(int,sys.stdin.readline().split())
        caseList=addEachCase(a,b,caseList)
        
    printEachResult(caseList)
    

if __name__=='__main__':
    T=int(sys.stdin.readline())
    makeCaseList(T)
