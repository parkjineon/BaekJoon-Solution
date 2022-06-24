import sys

def init():
    T = int(sys.stdin.readline())
    num = list(map(int,sys.stdin.readline().split()))
    factor = []
    for i in range(2, num[0]+1):
        if num[0] % i == 0:
            factor.append(i)
    
    for i in range(1,len(num)):
        c = 1
        for j in factor:
            if num[i] % j == 0:
                c = j
        sys.stdout.write("{}/{}\n" .format(num[0]//c, num[i]//c))
                
init()
