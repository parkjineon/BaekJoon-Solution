#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T, x1, y1, r1, x2, y2, r2;
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        
        int d = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
        int b1 = (r1+r2)*(r1+r2);
        int b2 = (r1-r2)*(r1-r2);
        
        if(d==0){
            if(r1==r2){
                cout << -1 << '\n';
            }else{
                cout << 0 << '\n';
            }
        }else{
            if(d > b1){
                cout << 0 << '\n';
            } else if(d == b1){
                cout << 1 << '\n';
            }else if(b2 < d && d < b1){
                cout << 2 << '\n';
            }else if(b2 == d){
                cout << 1 << '\n';
            }else if(d < b2){
                cout << 0 << '\n';
            }
        }
        
    }
    return 0;
}
