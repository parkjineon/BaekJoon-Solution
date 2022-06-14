#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    string item;
    set<string> items[50];
    set<string>::iterator it;
    
    cin >> N;
    
    
    for(int i=0; i<N; i++){
        cin >> item;
        items[item.length()-1].insert(item);
    }
    
    for(int i=0; i < 50; i++){
        for(it = items[i].begin(); it != items[i].end(); it++){
            cout << *it<< '\n';
        }
    }
    
    return 0;
}
