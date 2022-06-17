#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int dot[3][2];
    
    for(int i =0; i < 3; i++){
        cin >> dot[i][0] >> dot[i][1];
    }
    
    for(int i =0; i< 3; i++){
        for(int j=0; j <3; j++){
            if(j==i){
                continue;
            }
            for(int k=0; k <3; k++){
                if(k==j || k==i){
                    continue;
                }
                if(dot[i][0]==dot[j][0] && dot[i][1]==dot[k][1]){
                    cout << dot[k][0]<< ' ' << dot[j][1];
                    break;
                }
            }
            
        }
    }
    return 0;
}
