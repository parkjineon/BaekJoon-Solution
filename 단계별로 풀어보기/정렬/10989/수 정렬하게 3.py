import sys
    
def init():
    N = int(sys.stdin.readline())
    cnt = []
    for i in range(10000):
        cnt.append(0)
        
    for i in range(N):
        i = int(sys.stdin.readline())
        cnt[i-1] += 1

    for i in range(10000):
        while cnt[i] != 0:
            sys.stdout.write('{}\n' .format(i+1))
            cnt[i] -= 1
            
init()
