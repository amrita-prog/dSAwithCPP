#include<iostream>
#include<vector>
using namespace std;

int insertion_sort(vector<int> &arr,int n){
    for(int i=1;i<n;i++){
        int curr = arr[i];
        int prev = i-1;
        
        while(prev >= 0 && arr[prev] > curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
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

    insertion_sort(arr,n);
    print_arr(arr,n);

    return 0;
}