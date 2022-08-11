#include <iostream>
using namespace std;

int arr[15];
int N;
int cnt = 0;

bool check(int level){
    for(int i =0; i < level; i++){
        if(arr[i] == arr[level]||abs(arr[i]-arr[level])==level-i)
            return false;
    }
    return true;
}

void NQueen(int level){
    if(level==N){
        cnt++;
    } else{
        for(int i =0; i < N; i++){
            arr[level] = i;
            if(check(level)){
                NQueen(level+1);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N;
    NQueen(0);
    cout << cnt;
    
    
    
    return 0;
}
