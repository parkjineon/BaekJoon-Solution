#include <iostream>
using namespace std;


int multiplication(int n){
    for(int i=1;i<10;i++)
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    
    return 0;
}

int main(){
    int N;
    cin>>N;
    multiplication(N);
}
