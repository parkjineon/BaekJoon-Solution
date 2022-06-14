import sys
    
def init():
    N = int(sys.stdin.readline())
    num = [set() for i in range(51)]
    for i in range(N):
        word= sys.stdin.readline() //'\n'까지 같이 받아오기 때문에 다른 string과 다르게 길이가 1 더 길다.
        num[len(word)-1].add(word)

    for i in range(51):
        num[i] = sorted(num[i])
        for j in range(len(num[i])):
            sys.stdout.write(num[i][j])
                
init()
