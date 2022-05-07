import sys

def enterInput():
    try:
        inputList=[]
        while(1):
            a, b=map(int,sys.stdin.readline().split())
            inputList.append(a+b)
            
    except:
        return inputList

def printList(inputList):
    for i in range(len(inputList)):
        print(inputList[i], end='\n')
    
if __name__=='__main__':
    printList(enterInput())
