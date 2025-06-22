#include <bits/stdc++.h>
using namespace std;

void isPalindrome(string str) {
  
  	// Stores the reverse of the string s
    string rev = str;

    // Reverse the string
    reverse(rev.begin(), rev.end());

    // If rev is equal to str
    if (str == rev)
        cout << "\"" << str
      	<< "\" is palindrome." << endl;
      
	// If rev is NOT equal to str
    else
        cout << "\"" << str
      	<< "\" is NOT palindrome." << endl;
}

int main() {
    
  	string str;
    cout << "Enter a string: ";
    getline(cin, str);
    isPalindrome(str);
    return 0;
}
