#include<iostream>
using namespace std;

void calSAndP(int arr[], int size){
    int sum = 0,product = 1;
    for(int i = 0; i< size; i++){
        sum += arr[i];
        product *= arr[i];
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int sum = 0;
    int product = 1;

    calSAndP(arr,size);

    for(int i = 0; i< size; i++){
        sum += arr[i];
        product *= arr[i];
    }

    cout<<"Sum of all elements : "<<sum<<endl;
    cout<<"Product of all elements : "<<product<<endl;

    return 0;
}