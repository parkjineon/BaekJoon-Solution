import sys
import math

def init():
    R = int(sys.stdin.readline())
    sys.stdout.write('{:.6f}\n{:.6f}' .format(R*R*math.pi, 2*R*R))
init()
