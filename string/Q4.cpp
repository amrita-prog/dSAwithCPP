#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

string removeDuplicates(string s) {
    unordered_set<char> seen;  // unique characters store karega
    string result = "";        // final string without duplicates

    for (char c : s) {
        // agar character set mein nahi mila, toh add karo
        if (seen.find(c) == seen.end()) {
            seen.insert(c);    // set mein add karo
            result += c;       // result string mein bhi add karo
        }
    }

    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string noDuplicates = removeDuplicates(input);
    cout << "String without duplicates: " << noDuplicates << endl;

    return 0;
}
