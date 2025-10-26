#include<iostream>
using namespace std;

pair<int,int>  linearSearch(int mat[][3],int rows,int cols,int target){
    for(int i = 0;i < rows;i++){
        for(int j = 0;j < cols;j++){
            if(mat[i][j] == target){
                return {i,j};
            }
        }
    }

    return {-1,-1};
}

int main(){
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int rows = 3;
    int cols = 3;

    int target = 5;
    pair<int,int> result = linearSearch(matrix,rows,cols,target);

    if (result.first != -1)
        cout << "Element found at index (" << result.first << ", " << result.second << ")" << endl;
    else
        cout << "Element not found, returning (-1, -1)" << endl;

    
    return 0;
}