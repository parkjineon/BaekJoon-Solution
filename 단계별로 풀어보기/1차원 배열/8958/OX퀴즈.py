import sys

def analazing(testCase):
    succ = 0
    grade = 0

    for ans in testCase:
        if ans == 'O':
            succ+=1
            grade +=succ
        else:
            succ = 0
            
    return grade

def printing(testGradeList):
    for i in testGradeList:
        print(i)

def oxQuiz():

    cnt = int(sys.stdin.readline())
    testGradeList = []
  
    for i in range(cnt):
        testCase = list(sys.stdin.readline())
        testGradeList.append(analazing(testCase))
    
    printing(testGradeList)
    
oxQuiz()
