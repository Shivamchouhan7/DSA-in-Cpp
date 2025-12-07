#include <iostream>
#include <vector>
#include <utility>
using namespace std;

//MAtrix Diagonal Sum
pair<int,int> Diagonal_sum(vector<vector<int>>& arr, int n) {
pair<int ,int> p;
int psum = 0,ssum=0;
    for (int i = 0; i < n; i++) {
            psum += arr[i][i];                
            ssum += arr[i][n - i - 1];
    }

    if (n % 2 == 1) {
        int mid = n / 2;
        ssum -= arr[mid][mid];  
    } 


    return {psum,ssum};
}

int main() {
    int n;
    cout << "Enter matrix size : ";
    cin>>n;

    vector<vector<int>> mat(n, vector<int>(n));

    cout << "Enter matrix values:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];
            
        pair<int,int> p=Diagonal_sum(mat, n);
        cout<<"Primary Diagonal Sum = "<<p.first<<endl;
        cout<<"Secondary Diagonal Sum = "<<p.second<<endl;
    return 0;
}
