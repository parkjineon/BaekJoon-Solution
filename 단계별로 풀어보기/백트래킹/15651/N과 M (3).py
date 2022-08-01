import sys

def func(cnt):
    if cnt == M:
        for i in range(M):
            sys.stdout.write('%d ' %arr[i])
        sys.stdout.write('\n')
    else:
        for i in range(N):
            arr[cnt] = i+1
            func(cnt+1)

N, M = map(int,sys.stdin.readline().split())
arr = [0 for i in range(7)]
func(0)
