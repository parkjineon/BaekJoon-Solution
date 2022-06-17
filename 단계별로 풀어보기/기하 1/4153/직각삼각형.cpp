#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int dot[3], m, total;
    
    while(cin >> dot[0] >> dot[1] >> dot[2]){
        if(dot[0]==0 && dot[1]==0 && dot[2]==0)
            break;
        
        m = max(dot[0], max(dot[1], dot[2]));
        total = 0;
        for(int i = 0; i < 3; i++){
            if(dot[i] == m)
                continue;
            total += dot[i]*dot[i];
        }
        
        if(m*m == total){
            cout << "right\n";
        } else{
            cout << "wrong\n";
        }
    }

    return 0;
}
