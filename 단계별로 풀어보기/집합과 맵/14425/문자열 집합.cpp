#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    string item;
    int cnt = 0;
    cin >> N >> M;
    
    set<string> stringSet;
    
    for(int i=0; i < N; i++){
        cin >> item;
        stringSet.insert(item);
    }
    
    for(int i=0; i < M; i++){
        cin >> item;
        if(stringSet.find(item) != stringSet.end()){
            cnt++;
        }
    }
    
    cout << cnt;
    return 0;
}
