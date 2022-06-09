#include <iostream>
#include<list>
using namespace std;

int sort(int* num, int a, int m, int b){
    if(a <= b-2){
        sort(num, a, (a+m)/2, m);
        sort(num, m+1, (m+b+1)/2, b);
    }

    
    list<int> temp;
    list<int>::iterator it;
    
    int i=a;
    int j=m+1;
    
    while(j <= b && i <=m){
        if(num[j] < num[i]){
            temp.push_back(num[j]);
            j++;
        } else{
            temp.push_back(num[i]);
            i++;
        }
    }
    
    while(j<=b){
        temp.push_back(num[j]);
        j++;
    }
    
    while(i<=m){
        temp.push_back(num[i]);
        i++;
    }

    
    i=a;
    for(it = temp.begin(); it != temp.end(); it++){
        num[i] = *it;
        i++;
    }
    
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    int num[1000000] = {0};
    
    
    for(int i=0; i < N; i++){
        cin >> num[i];
    }
    
    sort(num, 0, (N-1)/2, N-1);

    for(int i = 0; i <N; i++){
        cout << num[i] << '\n';
    }
    
    return 0;
}
