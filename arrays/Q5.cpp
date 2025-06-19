#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        return INT_MIN; // No second largest element
    }

    int largest = arr[0];
    int secondLargest = INT_MIN;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        return INT_MIN; // All elements are the same or only one element
    } else {
        return secondLargest;
    }
}

int main() {
    int arr[] = {10, 5, 8, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, n);

    if (secondLargest == INT_MIN) {
        cout << "No second largest element exists." << endl;
    } else {
        cout << "The second largest element is: " << secondLargest << endl;
    }

    return 0;
}