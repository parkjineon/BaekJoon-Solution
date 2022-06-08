import sys
        
def init():
    N, M = map(int, sys.stdin.readline().split())
    num = list(map(int, sys.stdin.readline().split()))
    result = 0
    
    for i in range(N):
        for j in range(i+1,N):
            for k in range(j+1, N):
                total = num[i]+num[j]+num[k]
                if  M < total:
                    continue
                if  M-result > M-total:
                    result = total

    sys.stdout.write('{}' .format(result))
    
init()
