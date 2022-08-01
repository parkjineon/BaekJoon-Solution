import sys

def func(cnt, start):
    if cnt == M:
        for i in range(M):
            sys.stdout.write('%d ' %arr[i])
        sys.stdout.write('\n')
    else:
        for i in range(start, N):
            arr[cnt] = i+1
            func(cnt+1, i)

N, M = map(int,sys.stdin.readline().split())
arr = [0 for i in range(8)]
func(0, 0)
