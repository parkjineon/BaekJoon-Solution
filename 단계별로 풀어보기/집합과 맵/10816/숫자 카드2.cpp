#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M, card;
    vector<int> vec;
    cin >> N;
    
    for(int i=0; i < N; i++){
        cin >> card;
        vec.push_back(card);
    }
    
    sort(vec.begin(),vec.end());
    
    cin >> M;
    for(int i=0; i < M; i++){
        cin >> card;
        cout << upper_bound(vec.begin(),vec.end(), card)-lower_bound(vec.begin(), vec.end(), card) << ' ';
    }
    
    return 0;
}
