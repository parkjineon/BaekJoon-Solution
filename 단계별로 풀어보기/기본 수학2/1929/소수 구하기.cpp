#include <iostream> //시간초과
using namespace std;
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int M, N;
    cin >> M >> N;
    
    for(int i = M; i <= N; i++){
        bool prime = true;
        for(int j = 2; j < i; j++){
            if(i%j==0){
                prime = false;
                break;
            }
        }
        
        if(prime)
            cout << i <<'\n';
    }
    
    return 0;
}
