import sys

def init():
    T = int(sys.stdin.readline())
    for i in range(T):
        x1, y1, x2, y2 = map(int, sys.stdin.readline().split())
        n = int(sys.stdin.readline())
        cnt = 0
        for j in range(n):
            cx, cy, r = map(int, sys.stdin.readline().split())
            
            d1 = (x1-cx)*(x1-cx)+(y1-cy)*(y1-cy)
            d2 = (x2-cx)*(x2-cx)+(y2-cy)*(y2-cy)
            
            if d1 < r*r or d2 < r *r:
                if d1 < r*r and d2 < r *r:
                    continue
                cnt+=1
                
        sys.stdout.write('{}\n' .format(cnt))
init()
