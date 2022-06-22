#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a, b, c;
	cin >> a >> b;
	
	for(int i =1; i <= a; i++){
	    if(a%i == 0 && b%i == 0){
	        c = i;
	    }
	}
	cout << c << '\n' << a*(b/c);
	
	return 0;
}
