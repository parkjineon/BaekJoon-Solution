import sys

def init():
    pascal = []
    for i in range(31):
        pascal.append([])
        for j in range(i+1):
            if i == j or j == 0:
                pascal[i].append(1)
            else:
                pascal[i].append(pascal[i-1][j]+pascal[i-1][j-1])

    T = int(sys.stdin.readline())
    for i in range(T):
        N,K = map(int, sys.stdin.readline().split())  
        sys.stdout.write('%d\n' %pascal[K][N])

init()
