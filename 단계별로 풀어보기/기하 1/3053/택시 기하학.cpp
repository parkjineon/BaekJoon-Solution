#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    double R;
    cin >> R;
    
    cout << fixed;
    cout.precision(6);
    
    cout << R*R*M_PI << '\n';
    cout << 2*R*R;
    
    return 0;
}
