#include <iostream>
using namespace std;

int printToN(int n){
    for(int i=n; i>=1; i--)
        cout<<i<<'\n';

    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    printToN(n);
    
    return 0;
}
