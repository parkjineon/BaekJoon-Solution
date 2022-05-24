#python3에서 됨.

def initialize(alphabet):
    for i in range(26):
        alphabet.append(-1)
    return alphabet

def makeWordList(alphabet, word):
    initialize(alphabet)
    
    for i in range(len(word)):
        if(alphabet[ord(word[i])-97]==-1):
            alphabet[ord(word[i])-97] = i
            
    return alphabet
    
def printList(alphabet):
    for i in range(len(alphabet)):
        print(alphabet[i], end=' ')
    
def findAlphabet():
    alphabet = []
    word = list(input())
    makeWordList(alphabet, word)
    printList(alphabet)
    
findAlphabet()
