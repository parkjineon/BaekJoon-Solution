import sys

def printStars(N):
    
    for i in range(1,N+1):
        print(' '*(N-i)+'*'*i) # 빈칸만  출력 불가능
        
    return 0

if __name__=='__main__':
    N=int(sys.stdin.readline())
    printStars(N)
