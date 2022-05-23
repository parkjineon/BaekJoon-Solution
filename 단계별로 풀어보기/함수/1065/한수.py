import sys

def countHansu(N):
    cnt = 0
    
    for i in range(1,N+1):
        same = True
        j = i
        while(same):
            if j//100 == 0:
                break
            differ = ((j%1000)-(j%100))//100-((j%100)-(j%10))//10
            if(differ != ((j%100)-(j%10))//10-(j%10)):
                same = False
                break
            j=j//10
            
        if same == True:
            cnt+=1
    
    return cnt

def init():
    N=int(sys.stdin.readline())
    print(countHansu(N))

init()
