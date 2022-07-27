#include <iostream>
#define MAX 8
using namespace std;

int N, M;
int arr[MAX] = {0,};
bool visited[MAX] = {0,};

int dfs(int start, int cnt){
    if(cnt == M){
        for(int i = 0; i < M; i++){
            cout << arr[i]+1 << ' ';
        }
        
        cout << '\n';
    }
    
    for(int i = start; i < N; i++){
        if(!visited[i]){
            visited[i] = true;
            arr[cnt]=i;
            start = i;
            dfs(start, cnt+1);
            visited[i] = false;
        }
    }
    
    return 0;
}



int main(){
    cin >> N >> M;
    dfs(0,0);
    return 0;
}
