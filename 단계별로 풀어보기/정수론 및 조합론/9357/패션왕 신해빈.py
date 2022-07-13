import sys

def init():
    T = int(sys.stdin.readline())
    for i in range(T):
        t = int(sys.stdin.readline())
        closet = dict()
        result = 1
        for j in range(t):
            wearName, wearType = sys.stdin.readline().rstrip().split()
            if wearType in closet:
                closet[wearType] = closet[wearType]+1
            else:
                closet[wearType] = 1

        for k in closet.values():
            result = result*(k+1)

        sys.stdout.write('%d\n' %(result-1))
init()
