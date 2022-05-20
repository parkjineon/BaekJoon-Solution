#include <iostream>
using namespace std;

int findHanSu(int N){
    int cnt=0;
    bool same = true;
    
    for(int i=0; i<=N; i++){
        int differ = (j%100-j%10)/10-(j%10);
        
        if(differ != (j%1000-j%100)/100-(j%100-j%10)/10)
            continue;
            
            
    }

    
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin>>N;
    
    return 0;
}
