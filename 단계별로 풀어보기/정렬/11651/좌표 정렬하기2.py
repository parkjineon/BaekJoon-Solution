import sys
    
def init():
    N = int(sys.stdin.readline())
    num = [list() for i in range(200001)]
    for i in range(N):
        x, y = map(int, sys.stdin.readline().split())
        num[y+100000].append(x)

    for i in range(200001):
        if len(num[i]) != 0:
            num[i].sort()
            for j in range(len(num[i])):
                sys.stdout.write('{} {}\n' .format(num[i][j], i-100000))
                
init()
