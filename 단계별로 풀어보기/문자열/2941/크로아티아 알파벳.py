def countAlphabet(word):
    
    croatia = ['c=','c-','d-','dz=','lj','nj','s=','z=']
    
    for i in croatia:
        while(i in word):
            word=word.replace(i,' ') #그냥 없애버리면 새로운 문자 생겨날 수도 있음
    return len(word)
    

def init():
    word = input()
    print(countAlphabet(word))
    
init()
