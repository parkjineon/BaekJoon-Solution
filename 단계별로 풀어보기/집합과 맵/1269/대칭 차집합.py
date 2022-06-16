import sys

def init():
    N, M = map(int, sys.stdin.readline().split())
    A = set(map(int, sys.stdin.readline().split()))
    B = set(map(int, sys.stdin.readline().split()))

    C= A.symmetric_difference(B)

    sys.stdout.write("{}" .format(len(C)))
init()
