import sys

def addEach(List):
    for i in range(0,len(List)//2):
        print(List[i]+List[i+len(List)//2])
    
def makeCaseList(n):
    caseListA = []
    caseListB = []
    for i in range(0,n):
        a, b = map(int,sys.stdin.readline().split())
        caseListA.append(a)
        caseListB.append(b)
        
    return caseListA+caseListB
    
if __name__=='__main__':
    n=int(input())
    addEach(makeCaseList(n))
