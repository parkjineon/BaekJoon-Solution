#include <iostream>
#include <list>
using namespace std;

int addAll(list<int> nums){
    int a, b;
    list<int>::iterator i;
    for(i=nums.begin();i!=nums.end();i++){
        a=*i;
        i++;
        b=*i;
        cout<<a+b<<endl;
    }
    return 0;
}

list<int> makeList(int n, list<int> nums){
    int a, b;
    
    for(int i=0;i<n;i++){
    cin>>a>>b;
    nums.push_back(a);
    nums.push_back(b);
    }
    
    return nums;
}

int main(){
    int n;
    cin>>n;
    list<int> nums;
    
    nums=makeList(n, nums);
    addAll(nums);
    
    return 0;
}
