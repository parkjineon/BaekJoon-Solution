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

	fibonacci(a, b, N);

	return 0;
}
