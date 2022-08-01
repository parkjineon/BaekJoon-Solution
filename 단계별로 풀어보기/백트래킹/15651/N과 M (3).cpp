#include <iostream>
#define MAX 7 
using namespace std;

bool visited[MAX] = {0,};
int arr[MAX] = {0,};
int N, M;

int func(int cnt){
    
   if(cnt == M){
       for(int i = 0; i < M; i++){
           cout << arr[i] << ' ';
       }
       cout << '\n';
   } else{
        for(int i = 0; i < N; i++){
            arr[cnt] = i+1;
            func(cnt+1);
        } 
   }
    
    
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N >> M;    
    func(0);
    
    return 0;
}
