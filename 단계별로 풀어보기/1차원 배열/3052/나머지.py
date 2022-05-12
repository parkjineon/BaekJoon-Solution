import sys

def makeCntList(cntList):
    for i in range(10):
        cntList.add(int(sys.stdin.readline())%42)
    
def cntDifferValue():

    cntList=set()
    makeCntList(cntList)
    
    return len(cntList)    

def init():
    print(cntDifferValue())

init()
