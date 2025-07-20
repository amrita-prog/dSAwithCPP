#include<iostream>
#include<string>
using namespace std;

void mostFrequentChar(string str){
    int freq[256] = {0};

    for (char c : str){
        freq[int(c)]++;
    }


    char mostFreqChar = '\0';
    int maxFreq = 0;

    for (int i = 0;i < 256;i++){
        if(freq[i] > maxFreq){
            maxFreq = freq[i];
            mostFreqChar = (char)i;
        }
    }

    cout << "Most frequent character: " << mostFreqChar << " with frequency: " << maxFreq << endl;
}

int main(){
    string input;
    cout << "Enter a string :";
    cin >> input;

    mostFrequentChar(input);
    return 0;
}

