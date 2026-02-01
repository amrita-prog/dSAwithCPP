#include <bits/stdc++.h>
using namespace std;

void reverse_str(string str) {
    reverse(str.begin(), str.end());
    cout << "Reversed string: " << str << endl;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    reverse_str(str);
    return 0;
}
