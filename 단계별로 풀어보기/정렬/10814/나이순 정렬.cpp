#include <iostream>
#include <list>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    int age;
    string name;
    list<string> ages[200];
    list<string>::iterator it;
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> age >> name;
        ages[age-1].push_back(name);
    }
    
    for(int i=0; i < 200; i++){
        for(it = ages[i].begin(); it != ages[i].end(); it++){
            cout << i+1 << ' '<< *it <<'\n';
        }
    }
    
    return 0;
}
