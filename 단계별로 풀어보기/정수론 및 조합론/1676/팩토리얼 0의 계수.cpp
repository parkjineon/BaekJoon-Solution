#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, num;
    int five = 0;
    int two = 0;
    
    cin >> N;
    for(int i = 1; i < N+1; i++){
        num = i;
        while(num%2 == 0 || num%5 == 0){
            if(num%2 == 0){
                two++;
                num=num/2;
            }else{
                five++;
                num=num/5;
            }
        }
    }
    
    cout << min(two,five);
    return 0;
}
