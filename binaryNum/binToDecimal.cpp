#include<iostream>
using namespace std;

int binToDecimal(int binNum){
    int ans = 0,pow = 1;

    while(binNum > 0){
        int rem = binNum % 10;
        binNum = binNum /10;
        ans = ans + (rem * pow);
        pow = pow * 2;
    }
    return ans;
}

int main(){
    cout<<binToDecimal(110010);

    return 0;
}