#include <iostream>
#include <string>
using namespace std;

int main (){
    string A, B;
    cin >> A >> B;
    int a, b;
    int c = 0;
    string bigger;
    int* num;
    
    if (A.size()>B.size()){
        num = new int[A.size()+1];
        bigger = A;
    }
    else {
        num = new int[B.size()+1];
        bigger = B;
    }
    
    int n = bigger.size()+1;
    fill_n(num,n,0);
    
    int i;
    for(i = 1; !A.empty() && !B.empty(); i++){
        
        a = (int)A.back() - 48;
        b = (int)B.back() - 48;
        bigger.pop_back();
        A.pop_back();
        B.pop_back();
        
        num[n-i] = (a + b + c)%10;
        
        if(a+b >= 10){
            c = 1;
        } else{
            c = 0;
        }
    }
    
    for(; !bigger.empty(); i++){
        num[n-i] = ((int)bigger.back() - 48 + c)%10;
        if((int)bigger.back() - 48 + c >= 10){
            c = 1;
        } else{
            c = 0;
        }
        bigger.pop_back();
    }
    
    if (c==1){
        cout << 1;
    }
    
    for(int i = 1; i < n; i++)
        cout<<num[i];
    
    return 0;
}
