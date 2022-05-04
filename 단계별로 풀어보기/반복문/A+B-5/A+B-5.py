import sys

def enterInput():
    
    caseList=[]
    while(True):
        a,b = map(int,sys.stdin.readline().split())
        if(a==0 and b==0):
            break;
        caseList.append(a+b)
    
    return caseList

def printResult(caseList):
    for i in range(len(caseList)):
        print(caseList[i])
        
    return 0

if __name__=="__main__":
    printResult(enterInput())
