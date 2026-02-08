#include<iostream>
#include<vector>
using namespace std;

// void reverse(int l, int r, vector<int> &arr){
//     if(l >= r){
//         return ;
//     }

//     swap(arr[l], arr[r]);
//     reverse(l+1, r-1, arr);
// }

// int main(){
//     vector<int> arr = {1, 2, 3, 4, 5};
//     int n = arr.size();
//     reverse(0, n-1, arr);

//     for(int x : arr){
//         cout<<x<<" ";
//     }
//     return 0;
// }




// using one variable

void reverse(int i, int arr[], int n){
    if (i >= n/2){
        return;
    }
    swap(arr[i],arr[n-1-i]);
    reverse(i+1, arr, n);
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    reverse(0, arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}