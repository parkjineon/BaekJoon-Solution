import sys
        
def init():
    N, M = map(int, sys.stdin.readline().split())
    board = []
    mini = -1
    for i in range(N):
        board.append(list(sys.stdin.readline()))
    
    for i  in range(N-8+1):
        for  j in range(M-8+1):
            change1 = 0
            change2 = 0
            for  k in range(i, i+8):
                for l in range(j, j+8):
                    if (k+l)%2 == 0:
                        if board[k][l] == 'W':
                            change1 += 1
                        else:
                            change2 += 1
                    else:
                        if board[k][l] == 'W':
                            change2 += 1
                        else:
                            change1 += 1
            if mini == -1 or mini > change1 or mini > change2:
                if  change1 > change2:
                    mini = change2
                else:
                    mini = change1

    sys.stdout.write('{}' .format(mini))
    
init()
