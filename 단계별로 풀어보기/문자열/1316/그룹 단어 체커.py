def groupWordChecker(word):
    alphabet= set()
    alphabet.add(word[0])
    for i in range(1,len(word)):
        if (word[i]!=word[i-1]) and (word[i] in alphabet):
            return False
        else:
            alphabet.add(word[i])
    return True
    
def init():
    N=int(input())
    count=0
    for i in range(N):
        word=list(input())
        if(groupWordChecker(word)):
            count+=1
    print(count)
    
    return 0;
    
init()
