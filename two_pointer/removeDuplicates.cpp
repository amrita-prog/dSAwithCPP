#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& arr){
    int n = arr.size();
    if(n == 0) return 0;

    int x = 0; // x = write index

    for(int i = 1; i < n; i++){ // i = read index
        if(arr[i] != arr[x]){
            x++;
            arr[x] = arr[i];
        }
    }
    return x+1;

}


int main(){
    vector<int> arr = {1,1,2,3,4,4,5};
    
    int result = removeDuplicates(arr);

    cout<<"Unique Element : ";
    for(int i=0; i<result; i++){
        cout<<arr[i]<<" ";
    }
}