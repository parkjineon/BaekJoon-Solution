#include <iostream>
using namespace std;
// a는 아스키코드 97

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int alphabet[26];
    char word[100];
    
    cin.fill(alphabet,26,-1)
    cin>>word;
    
    for(int i = 0; word[i] == '\0'; i++){
        alphabet[int(word[i])-97]=i;
    }
    
    for(int i=0; i < 26; i++)
        cout<<alphabet[i];
        
    return 0;
}
