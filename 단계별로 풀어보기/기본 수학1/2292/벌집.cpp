#include <iostream>
using namespace std;
//6의 배수 누적 합

int findNumOfRoom(int N){
    int total = 0;
    int i;
    
    if(N==1)
        return 1;
        
    for(i=0; !((total<N)&&(N<=total+i*6+1));i++){
        total+=i*6;
    }
    
    
    return i+1;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    cout<<findNumOfRoom(N);

    return 0;
}
