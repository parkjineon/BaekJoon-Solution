#include <iostream>
using namespace std;

int factorial(int N) {
	int total = 1;

	if (N == 0)
		return 1;

	total = factorial(N - 1);

	return total * N;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	cout << factorial(N);

	return 0;
}
