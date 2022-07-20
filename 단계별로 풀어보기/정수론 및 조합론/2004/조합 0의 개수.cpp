#include <iostream>
#include <algorithm>
using namespace std;

int func(int n, int x){
    int num = 0;
    
    for(long long i = x; n/i >= 1; i*=x){
        num+=n/i;
    }
    
    return num;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    
    int five = 0;
    int two = 0;
    
    cin >> n >> m;
    
    five = func(n, 5) - func(n-m, 5) - func(m, 5);
    two = func(n, 2) - func(n-m, 2) - func(m, 2);
    
    cout << min(five,two);
    
    return 0;
}
