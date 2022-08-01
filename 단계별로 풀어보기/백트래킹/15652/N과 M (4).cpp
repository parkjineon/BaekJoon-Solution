#include <iostream>
#define MAX 7 
using namespace std;

int arr[MAX] = {0,};
int N, M;

int func(int cnt, int start){
    
   if(cnt == M){
       for(int i = 0; i < M; i++){
           cout << arr[i] << ' ';
       }
       cout << '\n';
   } else{
        for(int i = start; i < N; i++){
            arr[cnt] = i+1;
            func(cnt+1, i);
        } 
   }
    
    
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N >> M;    
    func(0, 0);
    
    return 0;
}
