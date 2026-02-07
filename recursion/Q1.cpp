#include<iostream>
using namespace std;


int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * factorial(n-1);
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int result = factorial(n);
    cout<<result<<endl;
    return 0;
}


// int factorial(int n){
//     if(n == 0 || n == 1){
//         return 1;
//     }else{
//         return n * factorial(n-1);
//     }
// }

// int main(){
//     int num;
//     cout<< "Enter a number: ";
//     cin >> num;

//     if(num < 0){
//         cout<< "Factorial of negative number is undefiend." << endl;
//     }else{
//         int result = factorial(num);
//         cout<< "Factorial of "<<num<<" is : "<<result << endl;
//     }

//     return 0;
// }





// print "Amrita" n times

// void print(int i, int n){
//     if(i > n){
//         return;
//     }
//     cout<<"Amrita"<<endl;
//     print(i+1, n);
// }

// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     print(1, n);
//     return 0;
// }





// print linearly from 1 to n


// void print(int i, int n){
//     if(i > n){
//         return;
//     }
//     cout<<i<<" ";
//     print(i+1, n);
// }

// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     print(1, n);
//     return 0;
// }




// print n to 1 


// void print(int i, int n){
//     if(i < 1){
//         return;
//     }
//     cout<<i<<" ";
//     print(i-1, n);
// }

// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     print(n, n);
//     return 0;
// }





// print linearly from 1 to n using backtracking


// void print(int i, int n){
//     if(i < 1){
//         return;
//     }
//     print(i-1, n);  // backtracking
//     cout<<i<<" ";
// }

// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     print(n, n);
//     return 0;
// }





// print n to 1 in reverse order using backtracking

// void print(int i, int n){
//     if(i > n){
//         return;
//     }
//     print(i+1, n);  // backtracking
//     cout<<i<<" ";
    
// }

// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     print(1, n);
//     return 0;
// }




// int sum(int n){
//     if(n == 0){
//         return 0;
//     }
//     return n +sum(n-1);
// }
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     int result = sum(n);
//     cout<<result<<endl;
//     return 0;
// }




