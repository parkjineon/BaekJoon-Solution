import sys

def init():
    N, M = map(int, sys.stdin.readline().split())
    dogam = []
    poketmonDict = dict()
    for i in range(N):
        item = sys.stdin.readline().rstrip()
        dogam.append(item)
        poketmonDict[item] = i+1

    for i in range(M):
        item = sys.stdin.readline().rstrip()
        try:
            item = int(item)
            sys.stdout.write('{}\n' .format(dogam[item-1]))
            
        except :
            sys.stdout.write('{}\n' .format(poketmonDict[item]))
    
                
init()
