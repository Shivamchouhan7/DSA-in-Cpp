#include <iostream>
#include <vector>
using namespace std;

// Elements are arranged row-wise and column-wise in ascending order

//Staircase search

bool searchMatrix(vector<vector<int>>& mat, int target){ //O(log m)
    int m=mat.size(),n=mat[0].size();
    int r=0,c=n-1;
    while(r<m && c>=0){
        if(target == mat[r][c]){
            return true;
        }
        else if(target < mat[r][c]){
            c--;
        }
        else{
            r++;
        }
    }

    
return false;
}
int main(){
    int r,c,target;
    cout<<"Enter rows : ";
    cin>>r;
    cout<<"Enter Column : ";
    cin>>c;
    
    vector<vector<int>> mat(r, vector<int>(c));
    cout<<"Enter elements of matrix "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> mat[i][j];
        }
    }

    cout<<"Enter target value : ";
    cin>>target;
    
    if(searchMatrix(mat,target)){
        cout<<"Target exists in the matrix ";
    }
    else{
        cout<<"Target is not present in the matrix ";
    }
    return 0;
}