#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int first = 0;
	int second = 1;
	int result, n;

	cin >> n;

	if (n == 0) {
		result = first;
	}
	else if(n==1){
		result = second;
	}
	else {
		for (int i = 2; i < n + 1; i++) {
			result = first + second;
			first = second;
			second = result;
		}
	}

	cout << result;
	return 0;
}
