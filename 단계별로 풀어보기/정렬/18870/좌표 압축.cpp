#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    set<int> sorted;
    vector<int> raw;
    
    int N, num;
    cin >> N;

    for(int i=0; i<N; i++){
        cin >> num;
        sorted.insert(num);
        raw.push_back(num);
    }
    
    vector<int> v(sorted.begin(), sorted.end());
    
    for(int n : raw){
        auto it = lower_bound(v.begin(), v.end(), n);
        cout << it - v.begin() << ' ';
    }
    return 0;  
}
