#include <iostream>
using namespace std;

int main(){
    int M, N;
    cin >> M >> N;
    int sum=0;
    int min=-1;
    
    for(int i = M; i <= N; i++){\
        bool prime = true;
        
        if(i==1)
            continue;
        
        for(int j = 2; j < i; j++){
            if(i%j==0){
                prime = false;
                break;
            }
        }
        
        if(prime){
            sum+=i;
            if(min == -1)
                min=i;
        }
    }
    
    if(min==-1){
        cout << min;
        return 0;
    }
    cout << sum << '\n' << min;
    return 0;
}
