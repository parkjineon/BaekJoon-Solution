#include <iostream>
using namespace std;

int multiplyInput(int A, int B, int C) {
	return A * B * C;
}

int* analyzeResult(int* cnt, int result) {

	while(result / 10 != 0){
		cnt[result % 10]++;
		result = result / 10;			
		}
		
	cnt[result % 10]++;

	return cnt;
}

int printCntResult(int* cnt) {

	for (int i = 0; i < 10; i++) {
		cout << cnt[i] << "\n";
	}

	return 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int A, B, C;
	int cnt[10] = { 0 };
	cin >> A >> B >> C;

	printCntResult(analyzeResult(cnt,multiplyInput(A, B, C)));

}
