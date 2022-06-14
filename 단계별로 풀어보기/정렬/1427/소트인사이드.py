import sys
    
def init():
    N = int(sys.stdin.readline())
    cnt = [0 for i in range(10)]

    while N != 0:
        cnt[N%10]+=1
        N = N//10

    for i in range(9,-1,-1):
        while cnt[i] != 0:
            sys.stdout.write('{}' .format(i))
            cnt[i] -= 1
        
init()
