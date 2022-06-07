#include <iostream>
using namespace std;

int star(int i, int j, int N){ 
    if(i==0 && j==0){  //순서가 중요한가?
        cout << '*';
    }else if(i/(N/3)==1 && j/(N/3)==1){
        cout << ' ';
    }else{
        star(i%(N/3),j%(N/3),N/3);
    }
    
    return 0;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    for(int i =0; i < N; i++){
        for(int j=0; j < N; j++){
            star(i, j, N);
        }
        cout << '\n';
    }
    
    return 0;
}
