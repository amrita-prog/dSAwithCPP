#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void isPalindrome(string str){
  string rev = str;
  reverse(rev.begin(),rev.end());
  if(str == rev){
    cout<<str <<" is palindrome"<<endl;
  }else{
    cout<<str <<" is not palindrome"<<endl;
  }
}

int main(){
  string str = "madam";
  isPalindrome(str);

  return 0;
}