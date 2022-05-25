def countAlphabet(word):
    
    cnt = 0
    croatia = ['c=','c-','d-','dz=','lj','nj','s=','z=']
    
    while((x in croatia) in word):
        cnt+=1
        word.replace(x,'')
    cnt+=len(word)
    
    return cnt

def init():
    word = input()
    print(countAlphabet(word))
    
init()
