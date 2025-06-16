#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cout<<"Enter three numbers find maximum : ";
    cin>>a>>b>>c;
    
    if (a >= b && a >= c){
        cout<<"The maximum number is : "<<a<<endl;
    }
    else if (b >= a && b >= c){
        cout<<"The maximum number is : "<<b<<endl;
    }
    else if (c >= a && c >= b){
        cout<<"The maximum number is : "<<c<<endl;
    }
    else {
        cout<<"There is no unique maximum number."<<endl;
    }
    return 0;
}