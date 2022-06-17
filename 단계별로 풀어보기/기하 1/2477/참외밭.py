import sys

def init():
    N = int(sys.stdin.readline())
    line = []
    for i in range(6):
        line.append(int(sys.stdin.readline().split()[1]))
    m1 = line.index(max(line))
    m2 = line.index(max(line[(m1+5)%6],line[(m1+1)%6]))
    total = line[m1]*line[m2]
    blank = (line[m1]-min(line[(m2+5)%6],line[(m2+1)%6]))*(line[m2]-min(line[(m1+5)%6],line[(m1+1)%6]))

        
    sys.stdout.write('{}' .format(N*(total-blank)))

init()
