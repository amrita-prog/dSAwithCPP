#include<iostream>
using namespace std;
int main() {
    int n;

    cout<<"Enter a number for sum of natural number :";
    cin>>n;

    int sum = 0;

    sum = (n * (n + 1)) / 2;
    cout<<"The sum of first "<<n<<" natural numbers is: "<<sum<<endl;

    return 0;

}