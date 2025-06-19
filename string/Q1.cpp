#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int vowels = 0, consonants = 0;

    cout << "Enter a string: ";
    getline(cin, str); // input full line including spaces

    for (char ch : str) {
        // convert to lowercase for easy comparison
        ch = tolower(ch);

        if (isalpha(ch)) { // check if character is a letter
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}
