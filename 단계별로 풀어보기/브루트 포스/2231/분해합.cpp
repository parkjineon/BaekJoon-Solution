#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    int constructor = 0;
    cin >> N;
    
    for(int i = 1; i <= N; i++){
        int j = i;
        int sum = i;
        while(j/10 != 0){
            sum += j%10;
            j = j/10;
        }
        sum += j;
        
        if(sum == N){
            constructor = i;
            break;
        }
    }
    
    cout << constructor;

    return 0;
}
