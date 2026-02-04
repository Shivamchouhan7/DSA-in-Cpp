#include <iostream>
#include <vector>
using namespace std;

bool searchInRow(vector<vector<int>>& mat, int target,int row){ //O(log n)
    int n = mat[0].size();
    int st=0,end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(target == mat[row][mid]){
            return true;
        }
        else if(target>mat[row][mid]){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return false;
}
bool searchMatrix(vector<vector<int>>& mat, int target){ //O(log m)
    int m=mat.size(),n=mat[0].size();
    int startrow=0,endrow=m-1;
    while(startrow<=endrow){
        int midrow=startrow+(endrow-startrow)/2;

        if(target>=mat[midrow][0] && target <=mat[midrow][n-1]){
            return searchInRow(mat,target,midrow);
        } else if(target>mat[midrow][n-1]){
            startrow=midrow+1;
        }
        else{
            endrow=midrow-1;
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