#include <iostream> 
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<int> notPrime;
    int M, N;
    cin >> M >> N;

    notPrime.insert(1);
    for (int i = 2; i * i <= N;i++) {//i*i가 N보다 큰 i까지만 하기
        if (notPrime.find(i) == notPrime.end()) {
            for (int j = i*i; j <= N; j+=i) { //i*i이후로 보기
                notPrime.insert(j);
            }
        }

    }

    for (int i = M; i <= N; i++) {
        if (notPrime.find(i) == notPrime.end())
            cout << i << '\n';
    }

    return 0;
}
