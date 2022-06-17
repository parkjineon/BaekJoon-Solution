#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int K;
    int line[7][2];
    int m1 = 0;
    int m2 = 0;
    int total, blank;
    cin >> K;
    
    for(int i = 0; i < 6; i++){
        cin >> line[i][0] >> line[i][1];
        if(line[i][1] > line[m1][1])
            m1 = i;
    }
    
    for(int i = 0; i < 6; i++){
        if(line[i][1] == max(line[(m1+5)%6][1],line[(m1+1)%6][1]) && i != m1)
            m2 = i;
    }
    
    total = line[m1][1]*line[m2][1];
    blank = (line[m2][1]-min(line[(m1+5)%6][1],line[(m1+1)%6][1]))*(line[m1][1]-min(line[(m2+5)%6][1],line[(m2+1)%6][1]));
    
    cout <<(total-blank)*K;

    return 0;
}
