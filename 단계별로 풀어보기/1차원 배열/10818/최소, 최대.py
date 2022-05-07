import sys

def findMaxMin(inputList):
    MAX=inputList[0]
    MIN=inputList[0]
    for i in range(1,len(inputList)):
        if MAX < inputList[i]:
            MAX = inputList[i]
        if MIN > inputList[i]:
            MIN = inputList[i]

    print("%d %d" %(MIN, MAX))

def init():
    N=int(sys.stdin.readline())
    inputList=list(map(int,sys.stdin.readline().split()))
    findMaxMin(inputList)

init()
