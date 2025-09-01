#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> &arr,int n, int m, int maxAllowedTime){
    int painter = 1, time = 0;

    for(int i=0; i<n; i++){
        if(arr[i] > maxAllowedTime){
            return false;
        }

        if(time + arr[i] <= maxAllowedTime){
            time += arr[i];
        }else{
            painter++;
            time = arr[i];
        }
    }
    return painter > m ? false : true;
}

int minTimeToPaint(vector<int> &arr,int n, int m){
    if(m > n){
        return -1;
    }
    int sum = 0, ans = -1;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    int st = 0,end = sum;
    while(st <= end){
        int mid = st + (end - st)/2;

        if(isPossible(arr,n,m,mid)){
            ans = mid;
            end = mid - 1;
        }else{
            st = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {40,10,20,30};
    int n = 4, m = 2;

    cout<<minTimeToPaint(arr,n,m)<<endl;

    return 0;
}