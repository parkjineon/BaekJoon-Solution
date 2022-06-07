import sys

def hanoi(K, A, B, C):
    if K ==1:
        sys.stdout.write('{} {}\n' .format(A, C))
    else:
        hanoi(K-1, A, C, B)
        sys.stdout.write('{} {}\n' .format(A, C))
        hanoi(K-1, B, A, C)
        
def init():
    K = int(sys.stdin.readline())
    sys.stdout.write('{}\n' .format(2**K -1))
    hanoi(K, 1, 2, 3)
    
init()
