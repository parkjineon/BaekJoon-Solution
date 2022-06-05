#include <iostream>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio;
	cin.tie(NULL);

	set<int> notPrime;
	int n;

	notPrime.insert(1);
  //소수 리스트 미리 초기화
	for (int i = 2; i * i <= 123456*2; i++) {
		if (notPrime.find(i) == notPrime.end()) {
			for (int j = i * i; j <= 123456*2; j += i) {
				notPrime.insert(j);
			}
		}
	}

	while (cin >> n) {
		if (n == 0)
			break;

		int cnt = 0;

		for (int i = n + 1; i <= 2 * n; i++) {
			if (notPrime.find(i) == notPrime.end())
				cnt++;
		}

		cout << cnt << '\n';
	}

	return 0;
}
