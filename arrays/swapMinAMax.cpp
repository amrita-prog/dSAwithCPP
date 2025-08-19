#include<iostream>
using namespace std;

void swapMinMax(int arr[], int size){
    if (size <= 1) return;

    int minIndex = 0, maxIndex = 0;

    for(int i = 1; i< size; i++){
        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
        if(arr[i] > arr[maxIndex]){
            maxIndex = i;
        }
    }

    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
}

int main(){
    int arr[] = {5,9,6,1,21,19,27};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i< size; i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    swapMinMax(arr, size);

    for(int i = 0; i< size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}