#include <iostream>
#include <list>
using namespace std;

list<int> makeInputList() {
	int N, a;
	list<int> inputList;
	cin >> N;
	for(int i=0; i < N; i++){
		cin >> a;
		inputList.push_back(a);
	}

	return inputList;
}

int findMax(list<int> inputList){
	int max;
	max = inputList.front();
	list<int>::iterator it;
	for (it = inputList.begin(); it != inputList.end(); it++) {
		if (max < *it)
			max = *it;
	}

	return max;
}

int findMin(list<int> inputList) {
	int min;
	min = inputList.front();
	list<int>::iterator it;
	for (it = inputList.begin(); it != inputList.end(); it++) {
		if (min > *it)
			min = *it;
	}

	return min;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	list<int> list = makeInputList();
	cout << findMin(list) <<' '<< findMax(list);
}
