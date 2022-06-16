import sys
import bisect as b

def init():
    N = int(sys.stdin.readline())
    cards = list(map(int, sys.stdin.readline().split()))
    cards.sort()
    
    M = int(sys.stdin.readline())
    search = list(map(int, sys.stdin.readline().split()))

    for i in range(len(search)):
        sys.stdout.write('{} ' .format(b.bisect_right(cards, search[i])-b.bisect_left(cards, search[i])))
    
init()
