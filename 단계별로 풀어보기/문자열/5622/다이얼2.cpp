#include <iostream>
using namespace std;

int calculateTime(char* phoneNum){
    int time = 0;
    for(int i=0; phoneNum[i] != '\0'; i++){
        if((int)('A')<=(int)phoneNum[i]&&phoneNum[i]<=int('C')){
            time += 3;
        }else if((int('D')<=(int)phoneNum[i])&&phoneNum[i]<=int('F')){
            time += 4;
        }else if((int('G')<=(int)phoneNum[i])&&phoneNum[i]<=int('I')){
            time += 5;
        }else if((int('J')<=(int)phoneNum[i])&&phoneNum[i]<=int('L')){
            time += 6;
        }else if((int('M')<=(int)phoneNum[i])&&phoneNum[i]<=int('O')){
            time += 7;
        }else if((int('P')<=(int)phoneNum[i])&&phoneNum[i]<=int('S')){
            time += 8;
        }else if((int('T')<=(int)phoneNum[i])&&phoneNum[i]<=int('V')){
            time += 9;
        }else if((int('W')<=(int)phoneNum[i])&&phoneNum[i]<=int('Z')){
            time += 10;
        }else if((int('D')<=(int)phoneNum[i])&&phoneNum[i]<=int('F')){
            time += 11;
        }else{
            time += 12;
        }
        
    }
    
    return time;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    char phoneNum[16];
    cin >> phoneNum;
    
    cout<<calculateTime(phoneNum);
    
}
