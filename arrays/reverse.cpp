#include<iostream>
using namespace std;

void reversedArray(int arr[], int size){
    int start = 0, end = size - 1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int size;

    cout<<"Enter size of array : ";
    cin>>size;

    int arr[size];
    
    cout<<"Enter "<<size<<" elements ."<<endl;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    reversedArray(arr, size);

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
} 