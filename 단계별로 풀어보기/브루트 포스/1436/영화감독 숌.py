import sys
        
def init():
    N = int(sys.stdin.readline())
    i = 666
    
    while N != 0:
        j =i
        six = 3
        succ = False
        while( j != 0):
            if j%10 == 6:
                six -= 1
                succ = True
            else:
                six = 3
                succ = False

            if six == 0:
                break

            j = j//10
            
        if succ and six==0:
            N -= 1
            
        i+=1
        
    sys.stdout.write('{}' .format(i-1))

    
init()
