#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T, H, W, N;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;
		if (N%H==0){
		    cout << H*100 + (N / H)<<'\n';
		}else{
		    cout << (N%H)*100 + ((N / H) + 1)<<'\n';
		}
	}

	return 0;
}
