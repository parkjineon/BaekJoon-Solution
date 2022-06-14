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
    int mode1 = 0;
    bool second;
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
        if(nums[i] > mode1){
            mode = i;
            mode1 = nums[mode];
            second = false;
        } else if(nums[i] == mode1 && !second){
            second = true;
            mode = i;
        }
        
        while (nums[i] != 0){
            nums[i]--;
            m++;
            if(m == N/2+1){
                median = i-4000;
            }
        }
    }
    
    cout << (int)(round((double)mean/(double)N)) << '\n' << median << '\n'<< mode-4000 << '\n' << maximum - minimum;
    
    return 0;
}
