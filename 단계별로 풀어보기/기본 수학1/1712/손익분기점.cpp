#include <iostream>
using namespace std;

long findBreakEvenPoint(long A, long B, long C){
    if(C<=B)
        return -1;
    else
       return A/(C-B)+1;
}

int main(){
    long A, B, C;
    cin>>A>>B>>C;
    
    cout<<findBreakEvenPoint(A,B,C);
    return 0;
}
