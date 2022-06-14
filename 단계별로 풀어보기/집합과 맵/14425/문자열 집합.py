import sys
    
def init():
    cnt = 0
    N, M = map(int,sys.stdin.readline().split())
    stringSet = set()
    for i in range(N):
        stringSet.add(sys.stdin.readline().rstrip())

    for i in range(M):
        if sys.stdin.readline().rstrip() in stringSet:
            cnt +=1
            
    sys.stdout.write('%d' % cnt)
                
init()
