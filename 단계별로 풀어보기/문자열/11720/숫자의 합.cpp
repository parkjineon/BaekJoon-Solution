#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    int sum = 0;
    char num;
    
    cin>>N;
    for(int i = 0; i < N; i++){
        cin>>num;
        sum+=(int)num-48; //아스키 코드로 똑같은 숫자 찾기:-48 해주기
    }

    cout<<sum;
    
}
