#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> mat={
        {1,2,3},
        {4,5,6,88,99},  // 5 Elements
        {7,8,9}};

    //Here in 2D vector/Matrix :-

    // row => mat.size()
    //column => mat[i].size()

    //here in 2D vector we can also add more elements in a column than its size as vector is dynamic 

    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[i].size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}