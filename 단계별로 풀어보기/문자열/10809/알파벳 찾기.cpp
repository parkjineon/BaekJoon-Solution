#include <iostream>
using namespace std;
// a는 아스키코드 97

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int alphabet[26];
    char word[101]; //널문자 고려해서 1개 더해야 함
    
    fill_n(alphabet,26,-1);
    cin>>word;
    
    for(int i = 0; word[i] != '\0'; i++){
        if(alphabet[int(word[i])-97]==-1)
            alphabet[int(word[i])-97]=i;
    }
    
    for(int i=0; i < 26; i++)
        cout<<alphabet[i]<<' ';
        
    return 0;
}
