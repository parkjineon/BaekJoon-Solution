#include <iostream>
using namespace std;

int countAlphabet(char* word){
    int cnt =0;
    
    for(int i =0; word[i] != '\0'; i++){
        if((word[i]=='c'&&word[i+1]=='=')||word[i]=='c'&&word[i+1]=='-'||word[i]=='d'&&word[i+1]=='-'||word[i]=='l'&&word[i+1]=='j'||word[i]=='n'&&word[i+1]=='j'||word[i]=='s'&&word[i+1]=='='||word[i]=='z'&&word[i+1]=='='){
                i++;
        } else if(word[i]=='d'&&word[i+1]=='z'&&word[i+2]=='='){
            i+=2;
        }else{}
        cnt++;
    }
    
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    char word[101];
    cin >> word;
    cout << countAlphabet(word);
    
}
