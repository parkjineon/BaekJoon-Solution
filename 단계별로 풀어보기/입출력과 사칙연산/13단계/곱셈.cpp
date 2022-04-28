#include <iostream>
#include <string>

using namespace std;

int main(){
    string num;
    int a, first, second, third;
    cin>>a>>num;
    
    first=a*stoi(num.substr(2,1));
    second=a*stoi(num.substr(1,1));
    third=a*stoi(num.substr(0,1));
   
    cout<<first<<endl;
    cout<<second<<endl;
    cout<<third<<endl;
    cout<<first+second*10+third*100<<endl;
    
    return 0;
}
