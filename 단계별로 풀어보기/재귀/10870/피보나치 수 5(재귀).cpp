#include <iostream>
using namespace std;

int fibonacci(int a, int b, int N) {
	int result = a + b;
	a = b;
	b = result;
	if (N == 2) {
		cout << result;
		return result;
	}

	return fibonacci(a, b, N - 1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	int a = 0;
	int b = 1;

	if (N == 0) {
		cout << 0;
	}
	else if (N == 1) {
		cout << 1;
	}
	else {
		fibonacci(a, b, N);
	}

	return 0;
}
