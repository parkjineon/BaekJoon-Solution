import sys

def enterAllGrade(grade):
    grade = list(map(int,sys.stdin.readline().split()))

    return grade

def makeNewGrade(N,grade):
    M = findMax(N, grade)
    
    for i in range(N):
        grade[i] = grade[i]/M*100

    return grade

def findMax(N, grade):
    M= grade[0]
    
    for i in range(N):
        if(M < grade[i]):
            M = grade[i]

    return M

def findNewAvg(N, grade):
    total = 0;
    for i in range(N):
        total+= grade[i]

    return total/N

def init():
    N = int(sys.stdin.readline())
    grade = []

    grade = enterAllGrade(grade)
    grade = makeNewGrade(N, grade)
    print(findNewAvg(N,grade))
    
init()
