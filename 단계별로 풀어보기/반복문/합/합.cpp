#include <iostream>
using namespace std;

int addFromZeroToN(int n){
    int total=0;
    for(int i=1;i<=n;i++)
        total+=i;
    
    cout<<total<<endl;
    return total;
}

int main() {
    int n;
    cin>>n;
    addFromZeroToN(n);
    return 0;
}
