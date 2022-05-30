#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    switch(N%5){
        case 0:
            cout << N/5;
            return 0;
        case 1:
            if((N-6) < 0)
                break;
            cout << (N-6)/5 + 2;
            return 0;
        case 2:
            if((N-12) < 0)
                break;
            cout << (N-12)/5 + 4;
            return 0;
        case 3:
            if((N-3) < 0)
                break;
            cout << (N-3)/5 + 1;
            return 0;
        case 4:
            if((N-9) < 0)
                break;
            cout << (N-9)/5 + 3;
            return 0;
    }
    
    cout << -1;
    return 0;
}
