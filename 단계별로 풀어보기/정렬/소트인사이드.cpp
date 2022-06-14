#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    int nums[10] = {0,};
    cin >> N;
    
    while((int)(N/10) != 0){
        nums[N%10]++;
        N = (int)(N/10);
    }
    
    nums[N]++;
    
    for(int i = 9; i > -1; i--){
        while(nums[i] != 0){
            cout << i;
            nums[i]--;
        }
    }
    
    return 0;
}
