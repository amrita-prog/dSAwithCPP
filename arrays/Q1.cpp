#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {7,8,4,6,2};

    int smallest = *min_element(arr.begin(),arr.end());
    int largest = *max_element(arr.begin(),arr.end());

    cout<<"Smallest element: " << smallest << endl;
    cout<<"Largest element: " << largest << endl;

    return 0;
}