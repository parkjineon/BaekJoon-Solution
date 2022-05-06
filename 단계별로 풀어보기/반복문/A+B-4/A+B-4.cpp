#include <iostream>
#include <list>	
using namespace std;

list<int> enterInput() {
    int A, B;
    list<int> caseList;

    while (1) {
        cin >> A >> B;
        if (cin.eof()) break;
        caseList.push_back(A + B);
    }

    return caseList;
}

int printResult(list<int> caseList) {
    list<int>::iterator it;

    for (it = caseList.begin(); it != caseList.end(); it++)
        cout << *it << "\n";

    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);

    printResult(enterInput());
}
