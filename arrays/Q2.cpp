#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> num = {7,8,4};

    int sum = 0;
    for(int num : num){
        sum += num;
    }

    cout<<"Sum : "<<sum;
    return 0;
}