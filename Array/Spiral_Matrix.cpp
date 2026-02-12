#include <iostream>
#include <vector>
using namespace std;

//program to traverse matrix in spiral form (Leetcode 54)

vector<int> SpiralOrder(vector<vector<int>> &mat){
    int m = mat.size() , n = mat[0].size();
    int srow = 0, scol = 0,erow = m-1 , ecol = n-1; //Starting row --> srow , Starting column -->scol 
    vector<int> ans;
    while(srow <= erow && scol <= ecol){
        //Top 
        for(int j = scol;j<=ecol;j++){
            ans.push_back(mat[srow][j]);
        }
        //Right
        for(int i = srow+1;i<=erow;i++){
            ans.push_back(mat[i][ecol]);
        }
        //Bottom 
        for(int j = ecol-1;j>=scol;j--){
            if(srow==erow){
                break;
            }
            ans.push_back(mat[erow][j]);
        }
        //Left 
        for(int i = erow-1;i>=srow+1;i--){
            if(scol==ecol){
                break;
            }
            ans.push_back(mat[i][scol]);
        }
        srow++;
        erow--;
        scol++;
        ecol--;
        
    }
    return ans;
}

int main(){
     int r,c;
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
    vector <int> ans = SpiralOrder(mat);
    //Printing spiral matrix
    cout<<"Spiral Matrix is :- "<<endl;
    for(int x:ans){
        cout<<x<<" ";
    }
    
    return 0;
}