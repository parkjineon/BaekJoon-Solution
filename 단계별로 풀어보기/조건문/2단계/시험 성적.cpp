#include <iostream>
using namespace std;

int main() {
    int grade;
    cin>>grade;
    
    if(90<=grade&&grade<=100){
        cout<<'A'<<endl;
        return 0;
    }
    if(80<=grade&&grade<=89){
        cout<<'B'<<endl;
        return 0;
        
    }
    if(70<=grade&&grade<=79){
        cout<<'C'<<endl;
        return 0;
        
    }
    if(60<=grade&&grade<=69){
        cout<<'D'<<endl;
        return 0;
    }
    else
        cout<<'F'<<endl;
    
    return 0;
}
