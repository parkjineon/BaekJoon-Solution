import sys

def init():
    two, five = 0, 0
    N = int(sys.stdin.readline())
    for i in range(1, N+1):
        num = i
        while num%2 == 0 or num%5 == 0:
            if num%2 == 0:
                num = num//2
                two = two+1
            else:
                num = num//5
                five = five+1

    sys.stdout.write('%d' %(min(two,five)))
    
init()
