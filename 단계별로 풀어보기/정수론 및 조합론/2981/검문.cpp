#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, second;
    int num[100]={0,};
    
    cin >> N;
    cin >> num[0];
    int minimum = 0;
    
    for(int i=1; i < N; i++){
        cin >> num[i];
        if(num[i] < num[minimum])
            minimum = i;
    }
    
    minimum == 0 ? second = 1:second = 0;
    for(int i=0; i<N; i++){
        if(i == minimum)
            continue;
            
        if(num[second] > num[i] )
            second = i;
    }
    
    
    for(int i=2; i<num[second]+1; i++){
        int r = num[0]%i;
        bool same = true;
        for(int j=1; j < N; j++){
            if(r != num[j]%i){
                same = false;
                break;
            }
        }
        
        if(same)
            cout << i << ' ';
    }
    
    return 0;
}
