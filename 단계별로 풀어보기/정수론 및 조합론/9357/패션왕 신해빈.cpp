#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T, t, cnt;
    int result;
    string wearName, wearType;
    cin >> T;
    map<string,int> closet;
    
    for(int k=0; k < T; k++){
        closet.clear();
        cin >> t;
        result = 1;
        for(int i=0; i<t; i++){
            cin >> wearName >> wearType;
            if(closet.find(wearType)!=closet.end()){
                closet[wearType]++;
            }else{
                closet.insert({wearType,1});
            }
        }
        
        for(auto it = closet.begin(); it != closet.end(); it++){
            result *= it->second+1;    
        }
        cout << result-1<<'\n';
    }

    return 0;
}
