#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter a number: ";
    cin>>n;

    if(n % 2 == 0){
        cout<<"The number "<<n<<" is even."<<endl;
    } else {
        cout<<"The number "<<n<<" is odd."<<endl;
    }

    return 0;
}