import sys
        
def init():
    N=int(sys.stdin.readline())
    constructor = 0;
    
    for i in range(1, N+1):
        j = i
        total = i
        
        while j//10 != 0:
            total += j%10
            j = j//10
            
        total += j

        if total == N:
            constructor = i
            break

    sys.stdout.write('{}' .format(constructor))
    
init()
