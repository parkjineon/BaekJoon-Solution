import sys

def inverseNum(num):
    newNumList = list(num)
    newNum = 0
    
    for i in range(len(newNumList)):
        newNum+=int(newNumList[i])*pow(10,i)
        
    return newNum

def init():
    num1, num2 = sys.stdin.readline().split()
    num1 = inverseNum(num1)
    num2 = inverseNum(num2)
    
    if num1 > num2:
        print(num1)
    else:
        print(num2)
        
    return 0
    
init()
