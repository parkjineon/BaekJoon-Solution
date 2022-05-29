import sys

def findFraction(X):
    i = 2
    total = 1
    while(total < X):
        total+=i
        i+=1
    if i%2 == 0:
        print('{0}/{1}' .format((total-X)+1, i-((total-X)+1)))
    else: 
        print('{0}/{1}' .format(i-((total-X)+1),(total-X)+1 ))
              
def init():
    X = int(sys.stdin.readline())
    findFraction(X)

    return 0

init()
