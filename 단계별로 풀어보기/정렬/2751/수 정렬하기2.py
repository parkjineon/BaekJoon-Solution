import sys

def merge(num, a, m, b):
    i = a
    j = m+1
    new = []
    
    while i <= m and j <= b:
        if num[i] < num[j]:
            new.append(num[i])
            i += 1
        else:
            new.append(num[j])
            j += 1

    while i <= m:
        new.append(num[i])
        i += 1
    while j <= b:
        new.append(num[j])
        j += 1

    for i in range(a, b+1):
        num[i] = new[i-a]

    return num

def sort(num, a, m ,b):
    if a <= b-2:
       sort(num, a, (a+m)//2, m)
       sort(num, m+1, (m+b+1)//2, b)
       
    return merge(num, a, m, b)

    
def init():
    N = int(sys.stdin.readline())
    num = []
    for i in range(N):
        num.append(int(sys.stdin.readline()))

    num= sort(num, 0, (N-1)//2, N-1)
    
    for i in range(N):
        print(num[i])
    
init()
