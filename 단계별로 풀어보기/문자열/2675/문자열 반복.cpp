#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    char S[21];
    int T, R;
    
    cin>>T;
    
    for(int n=0; n < T; n++){
    
        cin>>R>>S;
    
        for(int i = 0; S[i] != '\0'; i++){
            for(int j = 0; j < R; j++){
                cout<<S[i];
                }
            }
        cout<<'\n';
    }
}
