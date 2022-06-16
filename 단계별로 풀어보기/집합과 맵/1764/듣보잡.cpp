#include <iostream>
#include <map>
#include <stdexcept>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    string name;
    map<string, string> both;
    map<string, string> nameList;
    
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        cin >> name;
        nameList.insert({name, name});
    }
    
    for(int i = 0; i < M; i++){
        cin >> name;
        try{
            nameList.at(name);
            both.insert({name, name});
        }
        catch (const out_of_range& oor){
            continue;
        }
    }
    
    cout << both.size() << '\n';
    for(auto i : both){
        cout << i.second <<'\n';
    }

    return 0;
}
