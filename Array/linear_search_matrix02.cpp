#include <iostream>
#include <utility>
using namespace std;

pair<int, int> LinearSearch(int mat[][6], int r, int c, int target) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (mat[i][j] == target)
                return {i,j};
        }
    }
    return {-1,-1};
}

int main() {
    int r, c = 6; 
    cout << "Enter no of rows: ";
    cin >> r;

    int target;
    cout << "Enter your target value: ";
    cin >> target;

    int matrix[100][6];  

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }

    pair<int ,int> p=LinearSearch(matrix,r,c,target);
    if(p.first!=-1){
        cout << "Element found at (" << p.first << ", " << p.second << ")";
    }
    else{
        cout<<"Element not found !!!";
    }

    return 0;
}
