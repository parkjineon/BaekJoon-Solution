#include <iostream>

using namespace std;

int makeNewNum(int OldNum) {
	int tenD, oneD, temp, NewNum;

	//Divide by digits
	tenD = OldNum / 10;
	oneD = OldNum % 10;

	//Make new number;
	temp = tenD;
	tenD = oneD;
	oneD = (temp + oneD)%10;
	NewNum = tenD * 10 + oneD;

	return NewNum;
}

int getCycle() {
	int num, oldNum, newNum, cycle;
	cin >> num;
	oldNum = num;
	newNum = -1;
	cycle = 1;

	newNum = makeNewNum(oldNum);
	while (num != newNum) {
		oldNum = newNum;
		newNum = makeNewNum(oldNum);
		cycle++;
	}

	return cycle;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int cycle;

	cycle = getCycle();
	cout << cycle;
}
