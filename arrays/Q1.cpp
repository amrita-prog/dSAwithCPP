#include<iostream>
#include <climits>
using namespace std;

int main(){
    int num[] = {5,15,8,-19,24};
    int size = 5;

    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallest_index = -1;
    int largest_index = -1; 

    for (int i = 0; i < size;i++){
        if (num[i] < smallest) {
            smallest = num[i];
            smallest_index = i;
        }
        if (num[i] > largest){
            largest = num[i];
            largest_index = i;
        }
    } 

    cout<<"Smallest element: " << smallest <<" at index "<<smallest_index<< endl;
    cout<<"Largest element: " << largest <<" at index "<<largest_index<< endl;

    return 0;
}