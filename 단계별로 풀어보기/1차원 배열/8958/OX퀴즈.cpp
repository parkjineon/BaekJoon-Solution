#include <iostream>
using namespace std;

char* enterInput(char* inputList) {
	cin >> inputList;

	return inputList;
}

int calculating(char* inputList) {
	int succ = 0;
	int total = 0;

	enterInput(inputList);

	for (int i = 0; inputList[i] != '\0'; i++) {
		if (inputList[i] == 'O') {
			succ++;
			total += succ;
		}
		else {
			succ = 0;
		}
	}

	return total;
}

int printResult(int cnt, int* gradeList) {
	for (int i = 0; i < cnt; i++)
		cout << gradeList[i]<<'\n';

	return 0;
}

int grading() {
	int cnt;
	char inputList[80] = { 0 };
	cin >> cnt;

	int* gradeList = new int[cnt];

	for (int i = 0; i < cnt; i++)
		gradeList[i] = calculating(inputList);

	printResult(cnt, gradeList);

	delete gradeList;

	return 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	grading();
}
