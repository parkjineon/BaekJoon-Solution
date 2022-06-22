#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, m1, m2, temp;
	cin >> N;
	
	cin >> m1;
	m2 = m1;
	for(int i =1; i < N; i++){
	    cin >> temp;
	    if (temp > m1)
	        m1 = temp;
        if (temp < m2)
            m2 = temp;
	}
	
	cout << m1*m2;
	return 0;
}
