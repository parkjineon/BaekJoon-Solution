#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T, N, K;
    int pascal[31][31] = {0};
    cin >> T;
    
    for(int i = 0; i <= 30; i++){
        for(int j = 0; j <= i; j++){
            if(j==0||j==i){
                pascal[i][j] = 1;
            } else{
                pascal[i][j] = (pascal[i-1][j-1] + pascal[i-1][j]);
            }
        }
    }   
    
    
    for(int k=0; k < T; k++){
        cin >> N >> K;
        cout << pascal[K][N] << '\n';
    }

    return 0;
}
