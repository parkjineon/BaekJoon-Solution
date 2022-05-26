#include <iostream>
#include <set>
using namespace std;

bool groupWordChecker(char* word){
    set<char> alphabet;
    alphabet.insert(word[0]); //set에는 push_back()없고 insert()씀
    
    for(int i=1; word[i]!='\0'; i++){
        if((word[i-1]!=word[i])&&(alphabet.find(word[i])!=alphabet.end()))
            return false;
        else
            alphabet.insert(word[i]);
    }
    
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    int count=0;
    char word[101];
    cin >> N;
    
    for(int i=0; i<N; i++){
        cin >> word;
        if(groupWordChecker(word))
            count++;
    }
    
    cout<<count;
    return 0;
}
