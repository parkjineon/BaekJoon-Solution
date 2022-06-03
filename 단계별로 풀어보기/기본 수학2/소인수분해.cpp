#include <iostream>
using namespace std;
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    for(int i = 2; i <= N; i++){
        while(N%i==0){
            cout << i << '\n';
            N = N/i;
        }
    }
    
    return 0;
}
