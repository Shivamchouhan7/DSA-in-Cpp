// Rate in Maze problem 
#include <iostream>
#include <vector>
using namespace std;

void helper(vector<vector<int>>& mat,int r,int c,string path,vector<string>& ans){
    int n=mat.size();
    if( r<0 || c<0 || r>=n || c>=n || mat[r][c]==0){
        return;

    }
    if(r==n-1 && c==n-1){ //ans found
        ans.push_back(path);
        return;
    }
    mat[r][c]=0; //marking as visited
    helper(mat,r+1,c,path+'D',ans); //for down
    helper(mat,r,c+1,path+'R',ans); //for right
    helper(mat,r-1,c,path+'U',ans); //for up
    helper(mat,r,c-1,path+'L',ans); //for left

    mat[r][c]=1; //backtracking
}
vector<string> findPath(vector<vector<int>>& mat){
    vector<string> ans;
    string path="";
    helper(mat,0,0,path,ans);
    return ans;
}
int main(){
    vector<vector<int>> vec={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    vector<string> ans=findPath(vec);
    cout<<"The paths are: ";
    for(string s:ans){
        cout<<s<<" ";
    }

    return 0;
}