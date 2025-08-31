#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr,int target){
    int mid , st = 0, end = arr.size()-1;

    while(st <= end){
        mid = (st+end)/2;

        if(target > arr[mid]){
        st = mid + 1;
        }else if(target < arr[mid]){
        end = mid - 1;
        }else{
        return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {2,4,6,7,9,14,23,30};
    int target = 14;

    cout<<binarySearch(arr,target)<<endl;

    return 0;
}