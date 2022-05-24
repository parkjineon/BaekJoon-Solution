#include <iostream>
using namespace std;
//아스키코드 a는 97, A는 65

int* countAlphabet(int* alphabet, char* word){
    for(int i=0; word[i]!='\0'; i++){
        if((int)word[i] >= 97){
            alphabet[(int)word[i]-97]++;
        }
        else{
            alphabet[(int)word[i]-65]++;
        }
    }
    
    return alphabet;
}

int findMaxNum(int* alphabet){
    int max=0;
    bool overlap=false;
    
    for(int i=1; i<26; i++){
        if(alphabet[max]<alphabet[i]){
            max=i;
            overlap=false;
        } else if(alphabet[max]==alphabet[i]){
            overlap=true;
        }else{
            continue;
        }
    }
    
    if(overlap==true)
        return -1;
        
    return max+65;
}

int main(){
    char word[1000001];
    int alphabet[26];
    cin>>word;
    fill_n(alphabet,26,0);
    
    countAlphabet(alphabet, word);
    
    if(findMaxNum(alphabet)==-1){
        cout<<'?';
    }else{
        cout << (char)findMaxNum(alphabet);
    }
}
