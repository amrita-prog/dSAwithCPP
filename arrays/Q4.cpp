#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool isArraySorted(const vector<int>& arr){
    return is_sorted(arr.begin(),arr.end());
}

int main(){
    vector<int> sortedArray = {1, 2, 3, 4, 5};
    vector<int> unsortedArray = {5, 3, 4, 1, 2};

    cout<<"Sorted Array : "<< isArraySorted(sortedArray) << endl;
    cout<<"Unsorted array is sorted : "<< isArraySorted(unsortedArray) << endl;
    return 0;
}