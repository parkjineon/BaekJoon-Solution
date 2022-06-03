import sys

def init():
    M = int(sys.stdin.readline())
    N = int(sys.stdin.readline())
    total = 0
    minimum = -1
    
    for i in range(M, N+1):
        prime = True
        
        if i == 1:
            continue
        
        for j in range(2, i):
            if i%j == 0:
                prime = False
                break
        
        if prime :
            total += i
            if minimum == -1:
                minimum = i
    
    if minimum != -1:
        print(total)
    print(minimum)
    
    return 0
    
init()
