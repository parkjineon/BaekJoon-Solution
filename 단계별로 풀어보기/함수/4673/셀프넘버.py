def makeNewnum(N):
    notSelfNum = set()
    for i in range(1,N):
        num = i
        while(num<N):
            j=num
            while(j//10>0):
                num+=j%10
                j=j//10
            num+=j
            if(num<=N):
                notSelfNum.add(num)
    
    return notSelfNum
    
def printSelfNum(notSelfNum, N):
    for i in range(1, N+1):
        if i not in notSelfNum:
            print(i)

    return 0
    
def init():
    N = 10000
    notSelfNum = makeNewnum(N)
    printSelfNum(notSelfNum, N)
    
init()
