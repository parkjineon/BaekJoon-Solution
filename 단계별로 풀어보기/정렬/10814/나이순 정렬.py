import sys
    
def init():
    N = int(sys.stdin.readline())
    ages = [list() for i in range(200)]
    
    for i in range(N):
            age, name = sys.stdin.readline().split()
            age = int(age)
            ages[age-1].append(name)

    for i in range(200):
        for j in range(len(ages[i])):
            sys.stdout.write('%d %s\n' %(i+1,ages[i][j]))
                
init()
