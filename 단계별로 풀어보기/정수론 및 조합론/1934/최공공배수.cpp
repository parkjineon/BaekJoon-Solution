#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T, A, B, C, result;
    
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> A >> B;
        for(int j = 1; j < A+1; j++){
            if(A%j == 0 && B%j == 0)
                result = j;
        }
        
        cout << A*B/result << '\n';
    }
    
    return 0;
}
