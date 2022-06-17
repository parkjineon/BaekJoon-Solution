import sys

def init():
    x, y, w, h = map(int, sys.stdin.readline().split())
    w2 = w/2
    h2 = h/2

    if x >= w2 and y >= h2:
        if w-x > h-y:
            sys.stdout.write('{}' .format(h-y))
        else:
            sys.stdout.write('{}' .format(w-x))
    elif x >= w2 and y <= h2:
        if w-x > y:
            sys.stdout.write('{}' .format(y))
        else:
            sys.stdout.write('{}' .format(w-x))
    elif x <= w2 and y <= h2:
        if x > y:
            sys.stdout.write('{}' .format(y))
        else:
            sys.stdout.write('{}' .format(x))
    else:
        if x > h-y:
            sys.stdout.write('{}' .format(h-y))
        else:
            sys.stdout.write('{}' .format(x))
    
init()
