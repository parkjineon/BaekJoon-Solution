import sys
        
def init():
    N=int(sys.stdin.readline())
    total = []
    
    for i in range(N):
        total.append(list(map(int,sys.stdin.readline().split())))
        total[i].append(1)

    for i in range(N):
        for j in range(N):
            if ( total[i][0] < total[j][0]) and ( total[i][1] < total[j][1]):
                total[i][2]+=1;

    for i in range(N):
        sys.stdout.write('{} ' .format(total[i][2]))
        
init()
