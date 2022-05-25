def calculateTime(phoneNum):
    time = 0;
    for i in range(len(phoneNum)):
        if ord('A')<=ord(phoneNum[i])<=ord('C'):
            time += 3
        elif ord('D')<=ord(phoneNum[i])<=ord('F'):
            time += 4
        elif ord('G')<=ord(phoneNum[i])<=ord('I'):
            time += 5
        elif ord('J')<=ord(phoneNum[i])<=ord('L'):
            time += 6
        elif ord('M')<=ord(phoneNum[i])<=ord('O'):
            time += 7
        elif ord('P')<=ord(phoneNum[i])<=ord('S'):
            time += 8
        elif ord('T')<=ord(phoneNum[i])<=ord('V'):
            time += 9
        elif ord('W')<=ord(phoneNum[i])<=ord('Z'):
            time += 10
        else:
            time += 11
        
    return time

def init():
    phoneNum=list(input())
    print(calculateTime(phoneNum))
    
init()
