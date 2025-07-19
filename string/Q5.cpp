#include <iostream>
#include <string>
using namespace std;

void findMostFrequentChar(string str) {
    int freq[256] = {0}; // ASCII character frequency table

    // Count frequency of each character
    for (char c : str) {
        freq[(int)c]++;
    }

    // Find the character with max frequency
    char mostFreqChar = '\0';
    int maxFreq = 0;

    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFreqChar = (char)i;
        }
    }

    cout << "Most frequent character: " << mostFreqChar << endl;
    cout << "Frequency: " << maxFreq << endl;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    findMostFrequentChar(input);

    return 0;
}
