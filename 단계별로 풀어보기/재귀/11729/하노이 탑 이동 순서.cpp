#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int K, int from, int by, int to){
    if (K == 1){
        cout << from << ' ' << to << '\n';
    } else{
        hanoi(K-1, from, to, by);
        cout << from << ' ' << to << '\n';
        hanoi(K-1, by, from, to);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int K;
    cin >> K;
    
    cout << pow(2, K)-1 << '\n';
    hanoi(K, 1, 2, 3);
    
    return 0;
}
