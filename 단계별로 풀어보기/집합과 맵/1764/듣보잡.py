import sys

def init():
    N, M = map(int, sys.stdin.readline().split())
    nameList = dict()
    both = list()
    
    for i in range(N):
        name =  sys.stdin.readline().rstrip()
        nameList[name] = name

    for i in range(M):
        name =  sys.stdin.readline().rstrip()
        if nameList.get(name) != None:
            both.append(name)

    both.sort()
    sys.stdout.write('{}\n' .format(len(both)))
    for i in both:
        sys.stdout.write('{}\n' .format(i))
        
init()
