#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    vector<int> arr = {1,2,3,4,5};
    reverse(arr.begin(),arr.end());
    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}