import sys

def init():
    
    inputChar = sys.stdin.readline().rstrip()
    
    print(ord(inputChar)) // ord(): 문자열을 아스키 코드로 변환 chr(): 아스키 코드를 문자열로 변환
    
init()
