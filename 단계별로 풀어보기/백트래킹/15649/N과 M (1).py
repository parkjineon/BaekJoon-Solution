import sys

def dfs(cnt):
    
    if cnt == M:
        for i in range(M):
            sys.stdout.write('%d ' %arr[i])
        sys.stdout.write('\n')
        
    for i in range(N):
        if not visited[i]:
            visited[i] = True
            arr[cnt] = i+1
            dfs(cnt+1)
            visited[i] = False

N, M = map(int, sys.stdin.readline().split())
arr = [0 for i in range(8)]
visited = [False for i in range(8)]
dfs(0)
