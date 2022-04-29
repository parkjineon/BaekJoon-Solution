def alarm():
  hour, minute =map(int,input().split(' '))
  
  minute-=45
  
  if(minute<0):
    hour-=1
    minute+=60
    
  if(hour==-1):
    hour=23
    
  print(str(hour)+' '+str(minute))

if(__name__=='__main__'):
  alarm()
