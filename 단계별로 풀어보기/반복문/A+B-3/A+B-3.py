def makeList(n):
    List=[]
    for i in range(0,n):
        List=List + list(map(int,input().split()))
    return List
    
def addEach(List):
    for i in range(0,len(List)//2):
        print(List[2*i]+List[2*i+1])
        
if __name__=='__main__':
    n=int(input())
    addEach(makeList(n))
