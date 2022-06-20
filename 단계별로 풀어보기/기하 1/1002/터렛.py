import sys

def init():
    T = int(sys.stdin.readline())
    
    for i in range(T):
        x1, y1, r1, x2, y2, r2 = map(int, sys.stdin.readline().split())
        
        d = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)
        b1 = (r1+r2)*(r1+r2)
        b2 = (r1-r2)*(r1-r2)
        
        if d == 0:
            if r1 == r2:
                sys.stdout.write('{}\n' .format(-1))
            else:
                sys.stdout.write('{}\n' .format(0))
        else:
            if d > b1:
                sys.stdout.write('{}\n' .format(0))
            elif d == b1:
                sys.stdout.write('{}\n' .format(1))
            elif b2 < d < b1:
                sys.stdout.write('{}\n' .format(2))
            elif d == b2:
                sys.stdout.write('{}\n' .format(1))
            else:
                sys.stdout.write('{}\n' .format(0))
init()
