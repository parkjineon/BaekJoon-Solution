import sys

def init():
    dots = []
    for i in range(3):
      dots.append( list(map(int, sys.stdin.readline().split())))

    for i in range(3):
        for j in range(3):
            if i == j:
               continue
            for k in range(3):
                if k == j or k == i:
                    continue
                if dots[i][0] == dots[j][0] and dots[i][1] == dots[k][1]:
                    sys.stdout.write('{} {}' .format(dots[k][0], dots[j][1]))

init()
