#include <iostream>
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    char input;
    cin >> input;
    
    cout << (int)input; // char 아스키 값으로 바꾸기: (int) 형변환 해주면 됨
}
