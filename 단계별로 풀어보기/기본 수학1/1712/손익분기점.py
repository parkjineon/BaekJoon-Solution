import sys

def findBreakEvenPoint(A,B,C):
    if(C<=B):
        return -1
    else:
        return A//(C-B)+1
    
    
def init():
    A, B, C = map(int,sys.stdin.readline().split())
    print(findBreakEvenPoint(A,B,C))
    return 0
    
init()
