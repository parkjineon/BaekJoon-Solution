#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int row, column;
    char board[51][51];
    cin >> row >> column;
    int min = -1;
    for(int i = 0; i < row; i++){
        cin >> board[i];
    }
    
    for(int k = 0; k < row-8+1; k++){
        for(int r = 0; r < column-8+1; r++){
            int change1 = 0;
            int change2 = 0;
            for(int i = k; i < k+8; i++){
                for(int j =r; j < r+8; j++){
                    if(((i-k)%2==1 && (j-r)%2==1)||((i-k)%2==0 && (j-r)%2==0)){
                        if(board[i][j]!='W')
                            change1++;
                    } else{
                        if(board[i][j]!='B')
                            change1++;
                    }
                    if(((i-k)%2==1 && (j-r)%2==1)||((i-k)%2==0 && (j-r)%2==0)){
                        if(board[i][j]!='B')
                            change2++;
                    } else{
                        if(board[i][j]!='W')
                            change2++;
                    }
                }
            }
            if(min == -1 || min > change1 || min > change2)
                if(change1 < change2){
                    min = change1;
                } else{
                    min = change2;
                }
        }
    }

    cout << min;
    
    return 0;
}
