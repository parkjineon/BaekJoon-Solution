import sys
        
def init():
    N = int(sys.stdin.readline())
    num =[]
    for i in range(N):
        num.append(int(sys.stdin.readline()))

    for j in range(N):
        minimum = num[j]
        for i in range(j,N):
            if minimum > num[i]:
                temp = minimum
                minimum = num[i]
                num[i] = temp
        num[j] = minimum

    for i in range(N):
        sys.stdout.write('{}\n' .format(num[i]))
                         
init()
