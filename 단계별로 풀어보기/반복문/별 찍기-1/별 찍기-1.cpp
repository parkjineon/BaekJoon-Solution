#include <iostream>
using namespace std;

int printStars(int N){
    
    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            cout<<'*';
        }
        cout<<"\n";
    }
    
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin>>N;
    
    printStars(N);
}
