#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M, num;
    vector<int> A;
    vector<int> B;
    vector<int> V(400001);
    vector<int>::iterator it;
    cin >> N >> M;
    
    for(int i = 0; i<N; i++){
        cin >> num;
        A.push_back(num);
    }
    sort(A.begin(),A.end());
    for(int i = 0; i<M; i++){
        cin >> num;
        B.push_back(num);
    }
    sort(B.begin(),B.end());
    it = set_symmetric_difference(A.begin(), A.end(), B.begin(), B.end(),V.begin());
    V.resize(it-V.begin());
    cout << V.size();
    return 0;
}
