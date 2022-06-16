import sys

def init():
    S = sys.stdin.readline().rstrip()
    subString = set()
    for i in range(len(S)):
        for j in range(i+1, len(S)+1):
            subString.add(S[i:j])
            
    sys.stdout.write("{}" .format(len(subString)))
    
init()
