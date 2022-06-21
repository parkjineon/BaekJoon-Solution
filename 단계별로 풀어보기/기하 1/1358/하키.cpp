#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int W, H, X, Y, P, px, py, cnt;
    cin >> W >> H >> X >> Y >> P;
    cnt = 0;
    
    for(int i = 0; i < P; i++){
        cin >> px >> py;
    
        if((X <= px && px <= X+W)&&(Y <= py && py <= Y+H)){
            cnt++;
        }else if(((X-px)*(X-px)+(Y+H/2.0-py)*(Y+H/2.0-py) <= (H/2.0)*(H/2.0))||((X-px+W)*(X-px+W)+(Y+H/2.0-py)*(Y+H/2.0-py) <= (H/2.0)*(H/2.0))){
            cnt++;
        }
    }
    
    cout << cnt;
    
    return 0;
}
