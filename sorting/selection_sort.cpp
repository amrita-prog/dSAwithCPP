#include<iostream>
#include<vector>
using namespace std;

int selection_sort(vector<int> &arr,int n){
    for(int i=0;i<n-1;i++){
        int smallestIdx = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[smallestIdx]){
                smallestIdx = j;
            }
        }
        swap(arr[i],arr[smallestIdx]);
    }
}

int print_arr(vector<int> &arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {4,1,5,2,3};
    int n=5;

    selection_sort(arr,n);
    print_arr(arr,n);

    return 0;
}