#include <iostream>
#include <set>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M, item;
    set<int> sang;

    cin >> N;
    for(int i =0; i < N; i++){
        cin >> item;
        sang.insert(item);
    }
    
    cin >> M;
    for(int i = 0; i < M; i++){
        cin >> item;
        if (sang.find(item)!=sang.end()){
            cout << 1 << ' ';
        } else{
            cout << 0 << ' ';
        }
    }
    
    return 0;
}
