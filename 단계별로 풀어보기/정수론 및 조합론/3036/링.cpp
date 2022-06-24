#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, first, r, c;
    
    cin >> N >> first;
    
    for(int i = 1; i < N; i++){
        cin >> r;
        
        for(int j = 1; j < first+1; j++){
            if(first%j==0 & r%j==0)
                c = j;
        }
        
        cout << first/c << '/' << r/c << '\n';
    }
    
    return 0;
}
