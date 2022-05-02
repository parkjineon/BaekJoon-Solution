def judgeEqual(dice): # 2개만 같을 때, 같은 수 구하기
    if dice[0]==dice[1]:
        return dice[0]
    elif dice[1]==dice[2]:
        return dice[1]
    else:
        return dice[2]

def judgeBig(dice): # 다 다를 때 제일 큰 수 구하기
    big = dice[0]
    if big<dice[1]:
        big=dice[1]
    if big<dice[2]:
        big=dice[2]
    return big

def allEqual(dice): # 다 같을 때
    print(10000+1000*dice[0])
  
def twoEqual(dice): # 두 개 같을 때
    print(1000+judgeEqual(dice)*100)
    
def allDiffer(dice):
    print(judgeBig(dice)*100) # 세개 같을 때
    
def judgeDice(dice): # 판단
    if dice[0]==dice[1]==dice[2]:
        allEqual(dice)
    elif dice[0]==dice[1] or dice[1]==dice[2] or dice[2]==dice[0]:
        twoEqual(dice)
    else: 
        allDiffer(dice)
        
if __name__=='__main__': #메인
    dice = list(map(int,input().split()))
    judgeDice(dice)
