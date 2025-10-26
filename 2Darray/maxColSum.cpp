#include<iostream>
#include<climits>
using namespace std;

int getColSum(int mat[][3], int rows,int cols){
    int maxColSum = INT_MIN;

    for(int i=0;i<cols;i++){
        int colSum = 0; 
        for(int j=0;j<rows;j++){
            colSum = colSum + mat[j][i];          
        }
        maxColSum = max(maxColSum, colSum);
    }
    return maxColSum;
}

int main(){
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int rows = 3;
    int cols = 3;

    int result = getColSum(matrix,rows,cols);

    cout << "Maximum Column Sum is: " << result << endl;

    return 0;
}