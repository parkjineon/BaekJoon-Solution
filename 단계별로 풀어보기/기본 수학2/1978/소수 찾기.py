import sys

def init():
    N = int(sys.stdin.readline())
    nums = list(map(int,sys.stdin.readline().split()))
    cnt = 0
    
    for i in range(N):
        prime = True
        j = 2
        
        if nums[i] == 1:
            continue
        
        while j < nums[i] and prime:
            if nums[i]%j == 0:
                prime = False
                break
            j+=1
        
        if prime:
            cnt+=1
            
    print(cnt)
    
    return 0

init()
