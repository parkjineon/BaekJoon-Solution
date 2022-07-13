import sys

def init():
    N,K = map(int, sys.stdin.readline().split())
    pascal = []
    for i in range(N+1):
        pascal.append([])
        for j in range(i+1):
            if i == j or j == 0:
                pascal[i].append(1)
            else:
                pascal[i].append((pascal[i-1][j]+pascal[i-1][j-1])%10007)
                
    sys.stdout.write('%d' %pascal[N][K])

init()
