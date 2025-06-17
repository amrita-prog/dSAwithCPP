#include <iostream>
#include <vector>

using namespace std;

pair<int, int> countOddEven(const vector<int>& arr) {
    int evenCount = 0;
    int oddCount = 0;

    for (int num : arr) {
        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    return make_pair(oddCount, evenCount);
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11};
    pair<int, int> counts = countOddEven(numbers);

    cout << "Odd numbers: " << counts.first << endl;
    cout << "Even numbers: " << counts.second << endl;

    return 0;
}