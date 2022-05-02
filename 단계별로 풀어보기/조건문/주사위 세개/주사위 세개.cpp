#include <iostream>
using namespace std;

int main() {
    int a,b,c,key,reward;
    cin>>a>>b>>c;
    
    if((a==b)&&(b==c)&&(c==a)){
        reward=10000+a*1000;
    }
    else if((a!=b)&&(b!=c)&&(c!=a)){
        key=a;
        if(key<b||key<c){
            if(b>c)
                key=b;
            else
                key=c;
        }
        
        reward=key*100;
    }
    else{
        if(a==b)
            key=a;
        else if(b==c)
            key=b;
        else
            key=c;
        reward=1000+key*100;
    }
    
    cout<<reward<<endl;
}
