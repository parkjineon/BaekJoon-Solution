def timer(): //변수 계산 순서 중요
    hour, minute=map(int,input().split(' '))
    time=int(input())
    
    minute+=time%60
    if(minute>=60):
        hour+=1
        minute-=60
    
    hour+=time//60
    if(hour>=24):
        hour-=24
    
    print(hour, minute)
    
if __name__=='__main__':
    timer()
