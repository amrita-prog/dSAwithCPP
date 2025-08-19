#include<iostream>
using namespace std;

int main(){
    int rev = 0, n;
    cout<<"Enter a number : ";
    cin>>n;

    while(n > 0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    cout<<"Reversed number is : "<<rev<<endl;
    return 0;
}