#include <iostream>
using namespace std;

double* enterAllGrade(int N, double* grade) {

	for (int i = 0; i < N; i++) //c++ 배열 길이 찾는 법 sizeof(grade)/sizeof(int)
		cin >> grade[i];
	
	return grade;
}

double findMax(int N, double* grade) {
	int M = grade[0];
	for (int i = 1; i < N; i++) {
		if (M < grade[i])
			M = grade[i];
	}

	return M;
}

double* makeNewGrade(int N, double* grade) {

	int M = findMax(N, grade);

	for (int i = 0; i < N; i++) //sizeof(grade)/sizeof(int)
		grade[i] = grade[i] / M * 100;

	return grade;

}

double findNewAvg() {
	int N;
	double total=0.0;
	cin >> N;
	
	double* grade = new double[N];
	
	enterAllGrade(N, grade);
	makeNewGrade(N, grade);

	for (int i = 0; i < N; i++) //sizeof(grade)/sizeof(int)
		total += grade[i];

	total = total / double(N);
	
	delete grade; // 동적 할당 후 메모리 해제
	return total;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cout << findNewAvg();
}
