#include <iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter no of rows : ";
    cin>>r;
    cout<<"Enter no of columns : ";
    cin>>c;
    int matrix[r][c];

    //Inserting elements in matrix
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matrix[i][j];
        }
    }
    
    //Printing matrix or a 2D Array
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}