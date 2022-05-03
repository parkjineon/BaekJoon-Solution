#include <iostream>
#include <list>

using namespace std;

list<int> enterCase(list<int> caseList, int cnt){
    int a, b;
    
    for(int i=0; i<cnt ; i++){
        cin>>a>>b;
        caseList.push_back(a);
        caseList.push_back(b);
    }
    
    return caseList;
}

int addEach(list<int> caseList){
    int a, b;
    list<int>::iterator it;
    
    for(it=caseList.begin();it!=caseList.end();it++){ // list 요소 접근
        a=*it;
        it++;
        b=*it;
        cout<<a+b<<"\n";
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false); //c와 비동기화
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    list<int> caseList, a;
    cin>>n;
    
    a= enterCase(caseList, n);
    addEach(a);

    return 0;
}
