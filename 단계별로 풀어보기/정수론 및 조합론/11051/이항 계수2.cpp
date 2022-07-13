#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, K;
    int pascal[1001][1001] = {0};
    cin >> N >> K;
    
    for(int i = 0; i <= N; i++){
        for(int j = 0; j <= i; j++){
            if(j==0||j==i){
                pascal[i][j] = 1;
            } else{
                pascal[i][j] = (pascal[i-1][j-1] + pascal[i-1][j])%10007;
            }
        }
    }

    cout << pascal[N][K];
    return 0;
}
