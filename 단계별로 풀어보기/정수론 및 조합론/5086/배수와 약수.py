import sys

def init():
    a, b = map(int,sys.stdin.readline().split())
    while a != 0 and b != 0:
        if a%b == 0:
            sys.stdout.write("multiple\n")
        elif b%a == 0:
            sys.stdout.write("factor\n")
        else:
            sys.stdout.write("neither\n")
        a, b = map(int,sys.stdin.readline().split())
init()
