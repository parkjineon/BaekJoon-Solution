#include <iostream>

using namespace std;


int* makeList(int cntList[]) {
	int a;

	for (int i = 0; i < 10; i++) {
		cin >> a;
		cntList[a % 42]++;
	}

	return cntList;
}

int cntDifferValue(int cntList[]){
	int cnt = 0;

	for (int i = 0; i < 42; i++) {
		if (cntList[i] != 0)
			cnt++;
	}

	return cnt;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int cntList[42] = { 0 }; //초기화 꼭 필요!

	makeList(cntList);
	cout << cntDifferValue(cntList);
}
