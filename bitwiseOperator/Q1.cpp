#include<iostream>
using namespace std;

int isPowerOfTwo(int n){
    if (n <= 0) return 0;
    return (n & (n - 1)) == 0;
}

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    if (isPowerOfTwo(num)){
        cout<<num<<" is a power of 2.";
    }else{
        cout<<num<<" is not a power of 2.";
    }
}