#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, K, m1, m2;
    m1 = 1;
    m2 = 1;
    cin >> N >> K;
    
    for(int i = 1; i <= K; i++){
        m1 *= i;
        m2 *= N-i+1;
    }
    
    cout << m2/m1;
    return 0;
}
