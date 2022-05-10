import sys
from functools import reduce

def multiplyInput(nums):
    return reduce(lambda x, y: x*y,nums)

def analyzeResult(cnt, result):

    while(result//10 != 0):
        cnt[result%10]+=1
        result=result//10

    cnt[result%10]+=1

    return cnt

def printCnt(cnt):
    for i in range(10):
        print(cnt[i])

def init():
    nums=[]
    for i in range(3):
        nums.append(int(sys.stdin.readline()))
    cnt=[0 for i in range(10)]
    printCnt(analyzeResult(cnt, multiplyInput(nums)))
    
init()
