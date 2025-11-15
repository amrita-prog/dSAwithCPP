#include<iostream>
#include<vector>
using namespace std;

void getPerms(vector<int>& arr,int idx,vector<vector<int>> &ans){
    if(idx == arr.size()){
        for(int val : arr){
            cout<<val<<" ";
        }
        cout<<endl;
        return;
    }

    for(int i=idx; i<arr.size(); i++){
            swap(arr[idx],arr[i]);
            getPerms(arr,idx+1,ans);

            swap(arr[idx],arr[i]);
    }


}
int main(){
    vector<int> arr = {1,2,3};
    vector<vector<int>> ans;
    getPerms(arr,0,ans);
    return 0;
}
