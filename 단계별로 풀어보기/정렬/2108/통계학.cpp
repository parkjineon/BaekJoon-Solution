#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, num, median;
    int m = 0;
    int nums[8001] = {0, };
    cin >> N;
    
    cin >> num;
    int mean = num;
    int mode;
    int mode1 = num;
    int mode2 = num;
    nums[num+4000]++;
    
    int maximum = num;
    int minimum = num;
    
    for(int i = 1;  i < N; i++){
        cin >> num;
        mean += num;
        
        nums[num+4000]++;
        
        if (maximum < num)
            maximum = num;
        
        if (minimum > num)
            minimum = num;
    }
    
    for(int i = 0; i <= 8000; i++){
        if (nums[mode+4000] < nums[i]){
            mode1 = i-4000;
            mode = mode1;

        }
        while (nums[i] != 0){
            nums[i]--;
            m++;
            if(m == N/2+1){
                median = i-4000;
            }
        }
    }
    
    cout << round((double)mean/(double)N) << '\n' << median << '\n'<< mode << '\n' << maximum - minimum;
    
    return 0;
}
