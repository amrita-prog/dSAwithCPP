#include<iostream>
#include<vector>
using namespace std;

vector<int> pair_sum(vector<int>& arr, int target){
    vector<int> ans;
    int n = arr.size();
    int st = 0, end = n-1;

    while(st <= end){
        int sum = arr[st] + arr[end];
        if(sum == target){
            ans.push_back(arr[st]);
            ans.push_back(arr[end]);
            return ans;
        }else if(sum < target){
            st++;
        }else{
            end--;
        }
    }
    return ans;
}


int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int target = 6;

    vector<int> result = pair_sum(arr, target);

    if(result.size() == 2){
        cout << "Pair found: " << result[0] << ", " << result[1] << endl;
    }else{
        cout << "No pair found." << endl;
    }
    
    

    return 0;
}


