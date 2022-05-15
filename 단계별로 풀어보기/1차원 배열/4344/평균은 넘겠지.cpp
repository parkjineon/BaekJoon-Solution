#include <iostream>
using namespace std;

double* makeGradeList(double* gradeList,int stuCnt) {

	for (int i = 0; i < stuCnt; i++) {
		cin >> gradeList[i];
	}

	return gradeList;
}

double calculateAvg(double* gradeList, int stuCnt) {
	double total = 0.0;

	for (int i = 0; i < stuCnt; i++) {
		total+=gradeList[i];
	}

	return total / (double)stuCnt;
}

double calculateRate(double* gradeList, int stuCnt, double avg) {
	int cnt = 0;

	for (int i = 0; i < stuCnt; i++) {
		if (avg < gradeList[i])
			cnt++;
	}

	return ((double)cnt) / ((double)stuCnt)*(double)100; //형변환
}

double findOverAvgRate() {
	int stuCnt;
	cin >> stuCnt;
	double* gradeList = new double[stuCnt];

	cout << fixed; //소수점 고정
	cout.precision(3);

	makeGradeList(gradeList, stuCnt);
	double avg = calculateAvg(gradeList, stuCnt);
	double rate = calculateRate(gradeList, stuCnt, avg);

	delete gradeList;

	return rate;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int caseNum;
	cin >> caseNum;

	double* caseList = new double[caseNum];

	for (int i = 0; i < caseNum; i++) {
		caseList[i] = findOverAvgRate();
	}

	for (int i = 0; i < caseNum; i++) {
		cout << caseList[i] << '%'<<'\n';
	}

	delete caseList;

	return 0;
}
