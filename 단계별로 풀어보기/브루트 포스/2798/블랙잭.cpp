#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    int sum = 0;
    cin >> N >> M;
    int* cardNum = new int[N];
    
    for (int i = 0; i < N; i++)
        cin >> cardNum[i];
    
    for (int i = 0; i < N; i++){
        for(int j = i+1; j < N; j++){
            for(int k = j+1; k < N; k++){
                int total = cardNum[i]+cardNum[j]+cardNum[k];
                if(M < total)
                    continue;
                if(M-sum > M - total)
                    sum = total;
            }
        }
    }
    
    cout << sum;
    
    return 0;
}
