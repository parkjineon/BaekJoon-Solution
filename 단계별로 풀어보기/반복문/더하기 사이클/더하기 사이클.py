import sys

def makeNewNum(num):
    tenDigit=num//10
    oneDigit=num%10

    temp=tenDigit
    tenDigit=oneDigit
    oneDigit=(temp+oneDigit)%10

    return tenDigit*10+oneDigit
    
def getCycle(num):
    cycle = 1
    oldNum=num
    newNum=-1
    newNum=makeNewNum(oldNum)
    
    while(num != newNum):
        oldNum=newNum
        newNum=makeNewNum(oldNum)
        cycle=cycle+1

    return cycle

def init():
    num=int(input())
    print(getCycle(num))

init()
