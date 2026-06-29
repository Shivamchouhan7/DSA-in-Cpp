#include <iostream>
#include <vector>
using namespace std;

bool knightTour(vector<vector<int>>& grid,int r,int c,int n,int expVal){
    if(r<0||c<0||r>=n||c>=n||grid[r][c]!=expVal){
        return false;
    }
    if(expVal==n*n-1){
        return true;
    }
    bool ans1=knightTour(grid,r-2,c+1,n,expVal+1);
    bool ans2=knightTour(grid,r-1,c+2,n,expVal+1);
    bool ans3=knightTour(grid,r+1,c+2,n,expVal+1);
    bool ans4=knightTour(grid,r+2,c+1,n,expVal+1);
    bool ans5=knightTour(grid,r+2,c-1,n,expVal+1);
    bool ans6=knightTour(grid,r+1,c-2,n,expVal+1);
    bool ans7=knightTour(grid,r-1,c-2,n,expVal+1);
    bool ans8=knightTour(grid,r-2,c-1,n,expVal+1);
    return ans1||ans2||ans3||ans4||ans5||ans6||ans7||ans8;
}
int main(){
    int n;
    cout<<"Enter the size of the chessboard: ";
    cin>>n;
    vector<vector<int>> grid(n, vector<int>(n, 0));
    cout <<"enter elements of the chessboard: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    if(knightTour(grid,0,0,n,0)){
        cout<<"The knight's tour is possible."<<endl;
    }
    else{
        cout<<"The knight's tour is not possible."<<endl;
    }
    
    return 0;
}