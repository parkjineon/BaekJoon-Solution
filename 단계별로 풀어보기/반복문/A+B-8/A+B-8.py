import sys

def printEachResult(caseList):
    for i in range(0,len(caseList),3):
        print("Case #%d: %d + %d = %d" %(i//3+1,caseList[i],caseList[i+1],caseList[i+2]))

def addEachCase(a,b,caseList): # a, b, a+b를 같은 리스트에 저장 후 출력
    caseList.append(a)
    caseList.append(b)
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
