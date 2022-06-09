#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, minimum, temp;
    int num[1000] = {0};
    
    cin >> N;
    
    for(int i=0; i<N; i++)
        cin >> num[i];
        
    for(int j=0; j<N; j++){
        minimum = num[j];
        for(int i=j; i<N; i++){
            if(minimum > num[i]){
                temp = minimum;
                minimum = num[i];
                num[i] = temp;
            }
        }
        num[j]=minimum;
    }
    
    for(int i=0; i<N; i++){
        cout << num[i] << '\n';
    }
    
    return 0;
}
