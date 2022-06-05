import sys

def init():
    n = int(sys.stdin.readline())

    first = 0
    second = 1
    
    if n == 0:
        result = 0
    elif n == 1:
        result = 1
    else:
        for i in range(2, n+1):
            result = first + second
            first = second
            second = result
            
    print(result)
    
init()
