import sys

def findMax(inputList):
    max=inputList[0]
    pos=1
    for i in range(1,len(inputList)):
        if(max<inputList[i]):
            max=inputList[i]
            pos=i+1
    print("%d\n%d" %(max, pos))

def makeInputList():
    inputList=[]
    for i in range(9):
        inputList.append(int(sys.stdin.readline()))
    return inputList

def init():
    findMax(makeInputList())

init()
