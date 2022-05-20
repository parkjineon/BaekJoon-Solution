#include <iostream>
using namespace std;

int findHanSu(int N){
    int cnt=0;
    
    for(int i=1; i<=N; i++){
        
        bool same = true;
        int j = i;
        
        while(same){
            
            if(j/100==0)
                break;
            
            int differ = (j%100-j%10)/10-(j%10);
        
            if(differ != (j%1000-j%100)/100-(j%100-j%10)/10){
                same = false;
                break;
            }
                
            j = j/10;
            
        }
        
        if(same == true)
            cnt++;
        
    }

    
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin>>N;
    
    cout << findHanSu(N);
    return 0;
}
