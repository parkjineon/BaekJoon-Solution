#include <iostream>
#include <list>
using namespace std;

list<int> makeList() {
	int a;
	list<int> inputList;
	for (int i = 0; i < 9; i++) {
		cin >> a;
		inputList.push_back(a);
	}
	return inputList;
}

int findMax(list<int> inputList) {
	int max, num, pos;
	list<int>::iterator it;

	num = 1;
	pos = 1;
	max = inputList.front();
	for (it = inputList.begin(); it != inputList.end(); it++) {
		if (max < *it) {
			max = *it;
			pos = num;
		}
		num++;
	}

	cout << max << "\n" << pos;

	return 0;
}

int main() {
	findMax(makeList());
}
