#include <iostream> // w2과 h2이 같을 때도 무조건 고려
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    double w2 = w/2.0;
    double h2 = h/2.0;
    

    
    if( w2 <= x && h2 <= y){
        if(w-x<h-y){
            cout << w-x;
        } else{
            cout << h-y;
        }
    } else if ( w2 >= x && h2 <= y){
        if(x<h-y){
            cout << x;
        } else{
            cout << h-y;
        }
    } else if ( w2 >= x && h2 >= y){
        if(x<y){
            cout << x;
        } else{
            cout << y;
        }
    } else{
        if(w-x<y){
            cout << w-x;
        } else{
            cout << y;
        }        
    }

    return 0;
}
