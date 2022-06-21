import sys

def init():
    W, H, X, Y, P = map(int, sys.stdin.readline().split())
    cnt = 0
    for i in range(P):
        px, py = map(int, sys.stdin.readline().split())
        
        if (X <= px <= X+W) and (Y <= py <= Y+H):
            cnt+=1;
        elif ((X-px)*(X-px)+(Y+H/2-py)*(Y+H/2-py) <= (H/2)*(H/2)) or ((X+W-px)*(X+W-px)+(Y+H/2-py)*(Y+H/2-py) <= (H/2)*(H/2)):
            cnt+=1;
                
    sys.stdout.write('{}\n' .format(cnt))
    
init()
