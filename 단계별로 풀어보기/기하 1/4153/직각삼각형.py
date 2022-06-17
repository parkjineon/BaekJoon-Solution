import sys

def init():
    dots = list(map(int,sys.stdin.readline().split()))
    
    while(dots[0] != 0  and  dots[1] != 0 and  dots[2] != 0):
        m = max(dots)
        total = 0
        for i in range(3):
            if dots[i] == m:
                continue
            total += dots[i]* dots[i]
        
        if m*m == total:
            sys.stdout.write('right\n')
        else:
            sys.stdout.write('wrong\n')
            
        dots = list(map(int,sys.stdin.readline().split()))

init()
