#include<iostream>
#include<vector>
using namespace std;

bool subsetSum(int i, vector<int> &ds, int s, int sum, int arr[], int n) {
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





// print only one subset that adds up to the given sum:

// bool subsetSum(int i, vector<int> &ds, int s, int sum, int arr[], int n) {
//     if(i == n){
//         if(s == sum){
//             for(auto value: ds){
//                 cout<<value<<" ";
//             }
//             cout<<endl;
//             return true;
//         }
//         return false;
//     }

//     ds.push_back(arr[i]);
//     s += arr[i];

//     if(subsetSum(i+1, ds, s, sum, arr, n) == true){
//         return true;
//     }

//     s -= arr[i];
//     ds.pop_back();

//     if(subsetSum(i+1, ds, s, sum, arr, n) == true){
//         return true;
//     }
//     return false;
// }

// int main(){
//     int arr[] = {1,2,1};
//     int n = 3;
//     int sum = 2;
//     vector<int> ds;
//     subsetSum(0, ds, 0, sum, arr, n);

//     return 0;
// }