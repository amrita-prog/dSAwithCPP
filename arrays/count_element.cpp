#include<iostream>
#include<vector>
using namespace std;

void countElement(const vector<int>& arr, int target){
    int count = 0;
    for(int i=0 ; i < arr.size(); i++){
        if(arr[i] == target){
            count++;
        }
    }
    cout<<"Element "<<target<<" occurs "<<count<<" times in the array."<<endl;

}

int main(){
    vector<int> arr = {1,2,3,4,2,5,2,6};
    

    countElement(arr, 2);

    return 0;
}