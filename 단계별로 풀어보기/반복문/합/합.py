def addFromZeroToN(n):
    total=0
    for i in range(1,n+1):
        total+=i
    print(total)

if __name__ == '__main__':
    n=int(input())
    addFromZeroToN(n)
