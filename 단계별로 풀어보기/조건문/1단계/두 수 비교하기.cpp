#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin>>A>>B;
    
    if(A>B){
        cout<<'>'<<endl;
    }else{
        if(A<B){
            cout<<'<'<<endl;
        } else{
            cout<<"=="<<endl; // ==은 문자열이므로 ""로 묶는다.
        }
    }
    return 0;
}
