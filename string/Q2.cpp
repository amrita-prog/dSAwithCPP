#include<bits/stdc++.h>
using namespace std;

void isPalindrome(string str){
    string rev = str;
    reverse(str.begin(),str.end());
    if(str == rev){
      cout<<str <<" is palindrome"<<endl;
    }else{
      cout<<str <<" is not a palindrome"<<endl;
    }
}

int main(){
  string str;

  cout<<"Enter a string : ";
  cin>>str;

  getline(cin,str);
  isPalindrome(str);
  
  return 0;

}
    





















