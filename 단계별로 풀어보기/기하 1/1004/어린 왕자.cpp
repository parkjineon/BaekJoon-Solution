//출발점이나 도착점 한 개만 감싸고 있는 원의 수
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T, x1, y1, x2, y2, n;
    int cx, cy, r, d1, d2, cnt;
    cin >> T;
    for(int j = 0; j < T; j++){
        cin >> x1 >> y1 >> x2 >> y2 >> n;
        cnt = 0;
        for(int i = 0; i < n; i++){
            cin >> cx >> cy >> r;
            d1 = (x1-cx)*(x1-cx)+(y1-cy)*(y1-cy);
            d2 = (x2-cx)*(x2-cx)+(y2-cy)*(y2-cy);
            
            if(r*r < d1 || r*r < d2){
                if(r*r < d1 && r*r < d2 ){
                    continue;
                }
                cnt++;
            }
        }
        cout << cnt <<'\n';
    }
    return 0;
}
