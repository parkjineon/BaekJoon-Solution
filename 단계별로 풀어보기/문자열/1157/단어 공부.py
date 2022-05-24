#아스키코드 a는 97, A는 65

def initializeList():
    alphabet = []
    for i in range(26):
        alphabet.append(0)
        
    return alphabet

def countAlphabet(word):
    alphabet = initializeList()
    
    for i in word:
        if(ord(i)>=97):
            alphabet[ord(i)-97]+=1
        else:
            alphabet[ord(i)-65]+=1
    
    return alphabet;
    
def findMaxNum(alphabet):
    max=0
    overlap = False
    
    for i in range(1,26):
        if(alphabet[i]>alphabet[max]):
            max=i
            overlap=False
        elif(alphabet[i]==alphabet[max]):
            overlap=True
        else:
            continue
        
    if overlap == True:
        return -1
    else:
        return max

def printResult(alphabet):
    max = findMaxNum(alphabet)
    if max == -1:
        print('?')
    else:
        print(chr(max+65))
        
    return 0

def init():
    word=list(input().rstrip())
    alphabet=countAlphabet(word)
    printResult(alphabet)

init()
    
