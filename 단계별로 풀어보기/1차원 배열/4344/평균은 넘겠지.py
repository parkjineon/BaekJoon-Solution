import sys

def makeGradeList():
    return list(map(float,sys.stdin.readline().split()))

def calculateAvg(gradeList):
    total = 0.0
    for grade in gradeList:
        total+=grade
        
    total -= gradeList[0]

    return float(total)/(len(gradeList)-1)

def findOverAvgRate():
    gradeList=makeGradeList()
    avg=calculateAvg(gradeList)
    cnt=0

    
    for i in range(1,len(gradeList)):
        if avg < gradeList[i]:
            cnt+=1

    return float(cnt)/(len(gradeList)-1)*100    

def init():
    C=int(sys.stdin.readline())
    caseResult=[]
    for i in range(C):
        caseResult.append("{:.3f}" .format(findOverAvgRate())+'%')
    for result in caseResult:
        print(result)

init()
