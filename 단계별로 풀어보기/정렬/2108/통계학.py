import sys
    
def init():
    N = int(sys.stdin.readline())
    nums = []
    for i in range(8001):
        nums.append(0)

    num = int(sys.stdin.readline())
    nums[num+4000] += 1
    total = num
    maximum = num
    minimum = num
    mode1 = 0
    cnt = 0
    second = False
    
    for i in range(N-1):
        num = int(sys.stdin.readline())
        total += num
        nums[num+4000] += 1
        
        if num > maximum:
            maximum = num
            
        if num < minimum:
            minimum = num

    for i in range(8001):
        if nums[i] > mode1:
            mode1 = nums[i]
            mode = i-4000
            second = False
        elif (nums[i] == mode1) and (not second):
            second = True
            mode = i-4000

        while nums[i] != 0:
            nums[i] -= 1
            cnt += 1
            if cnt == N//2+1:
                median = i-4000

    
    sys.stdout.write('{}\n{}\n{}\n{}' .format(round(total/N), median, mode, maximum-minimum))
        
init()
