#include <iostream> //heap 영역 부족....
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    int weight[50];
    int height[50];
    int rank[50];
    cin >> N;
    
    fill_n(weight,50,0);
    fill_n(height,50,0);
    fill_n(rank,50,1);
    
    for(int i = 0; i < N; i++){
        cin >> weight[i] >> height[i];
    }
        
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(weight[i] < weight[j] && height[i]< height[j]){
                rank[i]++;
            }
        }
    }
    
    for(int i =0; i<N; i++){
        cout << rank[i] << ' ';
    }
    
    
    return 0;
}
