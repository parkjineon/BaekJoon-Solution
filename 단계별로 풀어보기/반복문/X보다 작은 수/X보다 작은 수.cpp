#include <iostream>
#include <list>
using namespace std;

list<int> makeList(int N){
    list<int> tempList;
    int temp;
    
    for(int i=0; i<N; i++){
        cin>>temp;
        tempList.push_back(temp);
    }
    
    return tempList;
}

int compareList(list<int> tempList,int X){
    list<int>::iterator it;
    for(it=tempList.begin();it!=tempList.end(); it++){
        if(*it<X)
            cout<<*it<<' ';
    }
    
    return 0;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, X;
    cin>>N>>X;
    
    compareList(makeList(N),X);
}
