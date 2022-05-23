import sys

def init():
    input = int(sys.stdin.readline().rstrip())
    num = list(sys.stdin.readline()) // 문자 하나씩 리스트에 넣으려면 그냥 list()로 묶으면 됨
    
    sum = 0
    
    for i in range(input):
        sum+=int(num[i])
        
    print(sum)
    
    return sum

init()
