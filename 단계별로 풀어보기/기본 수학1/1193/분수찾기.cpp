#include <iostream>
using namespace std;

int printFraction(int X) {
	int i;
	int total = 1;

	for (i = 2; total < X; i++)
		total += i;
	
	if (i % 2 == 0)
		cout << (total - X) + 1 << '/' << i - ((total - X) + 1);
	else
		cout << i - ((total - X) + 1) << '/' << (total - X) + 1;

	return 0;
}




int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int X;
	cin >> X;

	printFraction(X);

	return 0;
}
