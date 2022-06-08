#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, i;
    cin >> N;
   
    for(i = 666; N != 0; i++){
        int j = i;
        int six = 3;
        bool succ = false;
        while(j != 0){
            if(j%10 == 6){
                succ = true;
                six--;
                
            } else {
                succ = false;
                six = 3;
            }

            if(six==0){
                break;
            }
            
            j = j/10;
        }
        
        if(succ && six==0)
            N--;
    }
    
    cout << i-1;
    
    return 0;
}
