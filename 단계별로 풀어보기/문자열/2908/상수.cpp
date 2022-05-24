#include <iostream>
#include <cmath>
using namespace std;


int inverseWord(char* num){
    int newNum=0;
    for(int i=0; i<3; i++){ //sizeof(num) : 2byte 나옴
        newNum += ((int)num[i]-48)*pow(10,i); //지수승 cmath 헤더파일 필요: pow(n,r)
    }
    
    return newNum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    char num1[4], num2[4];
    int n1, n2;
    cin>>num1>>num2;
    
    n1=inverseWord(num1);
    n2=inverseWord(num2);
    
    if(n1<n2){
        cout<<n2;
    } else{
        cout<<n1;
    }
    
    return 0;
}
