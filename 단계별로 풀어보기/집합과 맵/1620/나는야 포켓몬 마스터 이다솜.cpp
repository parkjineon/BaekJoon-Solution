#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    int number;
    string poketmon;
    map<string,int> dogam1; 
    map<int, string> dogam2;
    cin >> N >> M;
    
    for(int i=0; i< N; i++){
        cin >> poketmon;
        dogam1.insert({poketmon, i+1});
        dogam2.insert({i+1, poketmon});
    }
    
    for(int i=0; i<M; i++){
        cin >> poketmon;
        try{
            number = stoi(poketmon);
            cout << dogam2.at(number) << '\n';
        }
        catch (exception & e) {
            cout << dogam1.at(poketmon)<< '\n';
        }
    }
    return 0;
}
