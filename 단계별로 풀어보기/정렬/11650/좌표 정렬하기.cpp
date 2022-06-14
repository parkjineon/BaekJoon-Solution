#include <iostream>
#include <set>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    set<int> dots[200001];
    set<int>::iterator it;
    
    int N;
    int x, y;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> x >> y;
        dots[x+100000].insert(y);
    }
    
    for(int i = 0; i < 200001; i++){
        for(it = dots[i].begin(); it != dots[i].end(); it++){
            cout << i-100000 << ' ' << *it << '\n';
        }
    }
    
    return 0;
}
