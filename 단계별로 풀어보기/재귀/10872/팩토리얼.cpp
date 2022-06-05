#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;

	cin >> N;

    if(N==0){
        cout << 1;
        return 0;
    }
    
	for (int i = N-1; i > 0; i--)
		N = N * i;
    
	cout << N;

	return 0;
}
