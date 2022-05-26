import sys
def findNumOfRoom(N):
    total = 0
    i=0    
    while(not((total<N)and(N<=total+i*6+1))):
        total+=i*6
        i+=1
    
    return i+1
    
def init():
    N=int(sys.stdin.readline())
    print(findNumOfRoom(N))
    
init()
