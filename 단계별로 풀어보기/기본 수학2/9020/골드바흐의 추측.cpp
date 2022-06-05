#include <iostream>
#include <set>
using namespace std;

set<int> makePrimeSet(set<int> primeSet) {
	set<int> notPrimeSet;

	notPrimeSet.insert(1);
	for (int i = 2; i * i <= 10000; i++) {
		for (int j = i * i; j <= 10000; j += i)
			notPrimeSet.insert(j);
	}

	for (int i = 1; i <= 10000; i++) {
		if (notPrimeSet.find(i) == notPrimeSet.end())
			primeSet.insert(i);
	}
	return primeSet;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	set<int> primeSet;
	set<int>::iterator it;
	int n, T, a, b;

	cin >> T;
	primeSet = makePrimeSet(primeSet);

	for (int i = 0; i < T; i++) {
		cin >> n;
		for (it = primeSet.begin(); it != primeSet.end(); it++) {
			if (*it > n - *it)
				break;

			if (primeSet.find(n - *it) != primeSet.end()) {
				a = *it;
				b = n - *it;
			}
		}

		cout << a << ' ' << b << '\n';
	}

	return 0;
}
