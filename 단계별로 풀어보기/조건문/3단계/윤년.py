def leapYear():
  year=int(input())
  if( (year%4==0 and year%100!=0) or year%400==0): # Python에서는 &&나 ||, ! 안 쓰고, and, or, not으로 쓴다.
    print(1)
  else:
    print(0)
    
if __name__=='__main__':
  leapYear()
