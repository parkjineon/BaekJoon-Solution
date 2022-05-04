#include <iostream>
#include <list>
using namespace std;

int printResult(list<int> caseList){
    list<int>::iterator it;
    
    for(it=caseList.begin();it!=caseList.end();it++){
        cout<<*it<<"\n";
    }
    
    return 0;
}

list<int> enterInput(){
    int A, B;
    list<int> caseList;
    
    while(cin>>A>>B){
        if(A==0&&B==0)
            break;
        caseList.push_back(A+B);
    }
    
    return caseList;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    printResult(enterInput());
    
}
