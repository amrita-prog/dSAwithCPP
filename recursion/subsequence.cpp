#include<iostream>
#include<vector>
using namespace std;

void sub(int i, vector<int> &ds, int arr[], int n){
    if(i >= n){
        for(auto value: ds){
            cout<<value<<" ";
        }
        if(ds.size() ==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    ds.push_back(arr[i]);
    sub(i+1, ds, arr, n);
    ds.pop_back();
    sub(i+1, ds, arr, n);
}

int main(){
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    sub(0, ds, arr, n);

    return 0;
}