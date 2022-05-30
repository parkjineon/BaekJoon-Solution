#include <iostream>
using namespace std;

int** initalize(int** num, int n){
    for(int i=0; i<n; i++){
        num[0][i]=i+1;
    }
    
    num[1][0] = 1;
    
    return num;
}

int findNum(int**num, int n, int k){
    for(int j = 0; j < k; j++){
        if(j%2==0){
            for(int i = 1; i < n; i++){
                num[1][i]=num[1][i-1]+num[0][i];
            
            }
        }else{
            for(int i = 1; i < n; i++){
                num[0][i]=num[0][i-1]+num[1][i];
            }
        }
    }
    
    if(k%2==0){
        return num[0][n-1];
    } else {
        return num[1][n-1];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T, k, n;
    cin >> T;
    int** num = new int*[2];
    
    for(int i=0; i<T; i++){
        cin >> k >> n;
        //2차원 배열 동적 할당
        for(int i=0; i<2; i++){ 
            num[i] = new int[n];
        }
      
        initalize(num, n);
        cout << findNum(num, n, k)<<'\n';
        
    }
    //2차원 배열 동적 할당 해제
    for(int i=0; i<2; i++)
	    delete num[i];
    delete num;
    
    return 0;
}
