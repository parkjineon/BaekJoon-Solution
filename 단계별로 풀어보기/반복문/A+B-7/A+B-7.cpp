#include <iostream>
#include <list>
using namespace std;

list<int> addEachCase(int a,int b, list<int> caseList){
    caseList.push_back(a+b);
    
    return caseList;
}

list<int> printEachResult(list<int> caseList){
    list<int>::iterator it;
    int i=1;
    for(it = caseList.begin(); it != caseList.end(); it++){
        cout<<"Case #"<<i<<": "<<*it<<"\n";
        i++;
    }
    return caseList;
}

int makeCaseList(int T){
    int a, b;
    list<int> caseList;
    
    for(int i=0; i<T; i++){
        cin>>a>>b;
        caseList=addEachCase(a,b,caseList);
    }
    
    printEachResult(caseList);

    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    makeCaseList(T);
    
    return 0;
}
