#include<iostream>
#include<vector>
using namespace std;

void subsetSum(int i, vector<int> &ds, int s, int sum, int arr[], int n) {
    if(i == n){
        if(s == sum){
            for(auto value: ds){
                cout<<value<<" ";
            }
            cout<<endl;
        }
        return;
    }

    ds.push_back(arr[i]);
    s += arr[i];

    subsetSum(i+1, ds, s, sum, arr, n);

    s -= arr[i];
    ds.pop_back();

    subsetSum(i+1, ds, s, sum, arr, n);
}

int main(){
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    subsetSum(0, ds, 0, sum, arr, n);

    return 0;
}