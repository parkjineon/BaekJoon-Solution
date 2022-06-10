#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cnt[10001]={0,};
    
    int N, num;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> num;
        cnt[num]++;
    }
    
    for(int i = 0; i < 10001; i++){
        while(cnt[i] != 0){
            cout << i << '\n';
            cnt[i]--;
        }
    }

    return 0;
}
