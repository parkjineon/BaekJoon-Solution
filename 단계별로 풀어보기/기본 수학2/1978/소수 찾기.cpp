#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    int cnt=0; //초기화 필요
    cin >> N;
    int* nums = new int[N];
    
    for(int i = 0; i < N; i++)
        cin >> nums[i];
    
    for(int i = 0; i < N; i++){
        bool prime = true;
        
        if(nums[i]==1)
            continue;
        
        for(int j = 2; j < nums[i]; j++){
            if(nums[i]%j==0){
                prime = false;
                break;
            }
        }
        
        if(prime)
            cnt++;
    }
    
    delete nums;
    cout << cnt;
    return 0;
}
