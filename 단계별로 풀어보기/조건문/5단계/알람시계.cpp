#include <iostream>
using namespace std;

int main(){
  int hour, minute;
  cin>>hour>>minute;
  
  minute=minute-45;
  
  if(minute<0){
    hour=hour-1;
    minute=60+minute;
  }
  if(hour==-1){
    hour=23;
  }
  
  cout<<hour<<' '<<minute<<endl;
  
  return 0;
}
