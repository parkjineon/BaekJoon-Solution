#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    set<string> substring;
    string S;
    int cnt = 0;
    int size;
    
    cin >> S;
    size = S.size();
    
    for(int i=0; i< size; i++){
        for(int j=1; j < size-i+1; j++){
            substring.insert(S.substr(i,j));
        }
    }
    
    cout << substring.size();
    
    return 0;
}
